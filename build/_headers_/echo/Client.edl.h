#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __echo__Client__COMPONENT_ENDPOINTS__
#define __echo__Client__COMPONENT_ENDPOINTS__
enum {
    echo_Client_iidMax,
};
enum {
    echo_Client_iidOffset = 0,
};
enum {
    echo_Client_securityIidMax,
};
enum {
    echo_Client_component_req_arena_size = 0,
    echo_Client_component_res_arena_size = 0,
    echo_Client_component_arena_size = 0,
    echo_Client_component_req_handles = 0,
    echo_Client_component_res_handles = 0,
    echo_Client_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Client_iidMax echo_Client_iidMax
#define Client_iidOffset echo_Client_iidOffset
#define Client_securityIidMax echo_Client_securityIidMax
#define Client_component_req_arena_size echo_Client_component_req_arena_size
#define Client_component_res_arena_size echo_Client_component_res_arena_size
#define Client_component_arena_size echo_Client_component_arena_size
#define Client_component_req_handles echo_Client_component_req_handles
#define Client_component_res_handles echo_Client_component_res_handles
#define Client_component_err_handles echo_Client_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Client__COMPONENT_ENDPOINTS__ */

#ifndef __echo__Client__ENTITY_ENDPOINTS__
#define __echo__Client__ENTITY_ENDPOINTS__
enum {
    echo_Client_entity_req_arena_size =
    echo_Client_component_req_arena_size,
    echo_Client_entity_res_arena_size =
    echo_Client_component_res_arena_size,
    echo_Client_entity_arena_size =
    echo_Client_component_arena_size,
    echo_Client_entity_req_handles =
    echo_Client_component_req_handles,
    echo_Client_entity_res_handles =
    echo_Client_component_res_handles,
    echo_Client_entity_err_handles =
    echo_Client_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Client_entity_req_arena_size echo_Client_entity_req_arena_size
#define Client_entity_res_arena_size echo_Client_entity_res_arena_size
#define Client_entity_arena_size echo_Client_entity_arena_size
#define Client_entity_req_handles echo_Client_entity_req_handles
#define Client_entity_res_handles echo_Client_entity_res_handles
#define Client_entity_err_handles echo_Client_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Client__ENTITY_ENDPOINTS__ */

#pragma GCC diagnostic pop

