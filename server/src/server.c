
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Инициализация транспорта. */
#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>

/* Ссылки на заголовки xDL, которые будут сгенерированы автоматически. */
#include <echo/IPing.idl.h>
#include <echo/CPing.cdl.h>
#include <echo/Server.edl.h>

#include <assert.h>

/* Реализация метода FPing, на него ссылается IPing.idl. */
static nk_err_t FPing_impl(struct echo_IPing *self,  
                          const echo_IPing_FPing_req *req, // типы аргументов также автогенерированы
                          const struct nk_arena* req_arena,
                          echo_IPing_FPing_res* res,
                          struct nk_arena* res_arena)
{
    /* req+req_arena - это аргументы от клиента к серверу,
     * а res+res_arena - это ответы сервера клиенту. */ 
    res->result = req->value + 3; // Инкремент сделан константным для упрощения примера.
    fprintf(stderr, "[Server] request %d, result %d\n", (int) req->value, (int) res->result);       
    return NK_EOK;
}

/* Конструктор интерфейса IPing.
 * Должен содержать ссылки на реализации всех методов. */
static struct echo_IPing *CreateIPingImpl(void)
{
    /* IPing_ops - это фактически объект-таблица ссылок на реализации. */
    static const struct echo_IPing_ops ops = {
        .FPing = FPing_impl  // слева название метода из IDL, справа реализация
    };

    /* Функция-конструктор должна возвращать ссылку на таблицу ссылок. */
    static echo_IPing obj = {
        .ops = &ops
    };

    return &obj;
}

/* Точка запуска сервера. */
int main(void)
{
    NkKosTransport transport;
    ServiceId iid;

    /* Сначала сервер регистрирует сервис "server_connection". */
    Handle handle = ServiceLocatorRegister("server_connection", NULL, 0, &iid);
    assert(handle != INVALID_HANDLE);

    /* Инициализация транспорта. */
    NkKosTransport_Init(&transport, handle, NK_NULL, 0);

    /* Подготовка структур запроса - частей постоянной длины и переменной (арены).
     * В этом примере покажу инициализацию арены, хотя если она не используется -
     * делать это не обязательно (см пример echo_mod_dyn) */
    echo_Server_entity_req req;
    char req_buffer[echo_Server_entity_req_arena_size];
    struct nk_arena req_arena = NK_ARENA_INITIALIZER(req_buffer, req_buffer + sizeof(req_buffer));

    /* Подготовка структур ответа. */
    echo_Server_entity_res res;
    char res_buffer[echo_Server_entity_res_arena_size];
    struct nk_arena res_arena = NK_ARENA_INITIALIZER(res_buffer, res_buffer + sizeof(res_buffer));

    /* Инициализация диспетчера компонента и привязка таблицы методов. */
    echo_CPing_component component;
    echo_CPing_component_init(&component, CreateIPingImpl());

    /* Инициализация прокси всего сервера. */
    echo_Server_entity entity;
    echo_Server_entity_init(&entity, &component);

    fprintf(stderr, "Hello I'm server\n");

    /* Рабочий цикл обработки. */
    do
    {
        /* Очистка входных буферов. Выходные сами будут перезаполнены*/
        nk_req_reset(&req);
        nk_arena_reset(&req_arena);

        /* Ожидание вызова сервера снаружи. */
        if (nk_transport_recv(&transport.base, &req.base_, &req_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_recv error\n");
        } else {
            /* Выбор метода, на который ссылается конкретный приехавший запрос. */
            echo_Server_entity_dispatch(&entity, &req.base_, &req_arena, &res.base_, &res_arena);
        }

        /* Отправка ответа клиенту. */
        if (nk_transport_reply(&transport.base, &res.base_, &res_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_reply error\n");
        }
    }
    while (true);

    return EXIT_SUCCESS;
}
