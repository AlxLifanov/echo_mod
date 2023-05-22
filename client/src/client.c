
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Подключаем библиотеки, необходимые для работы транспорта. */
#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>

/* Подключаем заголовок серверного интерфейса, т.к. на него
 * ссылаются определения типов обмениваемых данных. */
#include <echo/IPing.idl.h>

#include <assert.h>

#define EXAMPLE_VALUE_TO_SEND 777

/* Точка входа клиента. */
int main(int argc, const char *argv[])
{
    NkKosTransport transport;
    struct echo_IPing_proxy proxy;
    int i;

    /* Получаем у Локатора хендл IPC, ведущего к серверу.
     * "server_connection" - имя соединения указано в init.yaml. */
    Handle handle = ServiceLocatorConnect("server_connection");
    assert(handle != INVALID_HANDLE);

    /* По хендлу инициализируем само соединение. */
    NkKosTransport_Init(&transport, handle, NK_NULL, 0);

    /* Получаем Runtime Interface ID (RIID), ведущий к конкретному интерфейсу сервера -
     * смотри CPing.cdl
     * echo.CPing - название _класса_ интерфейса, указанное в Server.edl
     * ping  - название _экземпляра_ эндпойнта, указано в CPing.cdl, слева. */
    nk_iid_t riid = ServiceLocatorGetRiid(handle, "cserver.ping"); 
    assert(riid != INVALID_RIID);

    /* Инициализируем прокси-объект с указанием конкретного канала (&transport)
     * и идентификатора интерфейса (riid). Указание на конкретный метод интерфейса
     * будет указано уже внутри запроса к серверу - см. как сделан диспетчинг
     * внутри server/src/server.c. */
    echo_IPing_proxy_init(&proxy, &transport.base, riid);

    /* Декларируем структуры запроса и ответа, определенные в заголовках сервера */
    echo_IPing_FPing_req req;
    echo_IPing_FPing_res res;

    fprintf(stderr, "[Client] Starting cycle.\n");

    /* Рабочий цикл клиента. */
    req.value = EXAMPLE_VALUE_TO_SEND;
    for (i = 0; i < 10; ++i)
    {
        /* Вызываем метод, определенный для сервера в IPing.idl.
         * Сервер получит запрос на вызов метода FPing, в сопровождении
         * указателей на структуры запроса и ответа; arena в этом примере
         * не используется. Вызывающий поток после этого останавливается
         * до получения ответа от сервера. */
        fprintf(stderr, "[Client] sending value = %d\n", (int) req.value);        
        if (echo_IPing_FPing(&proxy.base, &req, NULL, &res, NULL) == rcOk)

        {
            /* Вывод ответа от сервера на консоль (место под result
             * декларировано заранее и заполнено при вызове метода FPing). */
            fprintf(stderr, "[Client] received result = %d\n", (int) res.result);
            /* Перекладываем результат предыдущей итерации
             * для переотправки серверу в качестве аргумента следующей. */
            req.value = res.result;

        }
        else
            fprintf(stderr, "Failed to call echo_IPing_FPing()\n");
    }

    fprintf(stderr, "[Client] Terminating.\n");

    return EXIT_SUCCESS;
}
