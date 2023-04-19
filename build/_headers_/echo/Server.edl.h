#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __echo__IPing__INTERFACE__
#define __echo__IPing__INTERFACE__
enum {
    echo_IPing_FPing_mid,
    echo_IPing_mid_max,
};
enum {
    echo_IPing_FPing_req_arena_size = 0,
    echo_IPing_FPing_res_arena_size = 0,
    echo_IPing_FPing_req_handles = 0,
    echo_IPing_FPing_res_handles = 0,
    echo_IPing_FPing_err_handles = 0,
    echo_IPing_req_arena_size = 0,
    echo_IPing_res_arena_size = 0,
    echo_IPing_arena_size = 0,
    echo_IPing_req_handles = 0,
    echo_IPing_res_handles = 0,
    echo_IPing_err_handles = 0,
};
typedef struct __nk_packed echo_IPing_FPing_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t value;
        } echo_IPing_FPing_req;
#pragma pack(push, 8) /* echo_IPing_FPing_res */
typedef struct echo_IPing_FPing_err {
            __nk_alignas(8)
            struct nk_message base_;
        } echo_IPing_FPing_err;
typedef struct echo_IPing_FPing_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t result;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t result;
                } res_;
                struct echo_IPing_FPing_err err_;
            };
        } echo_IPing_FPing_res;
#pragma pack(pop) /* echo_IPing_FPing_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IPing_FPing_mid echo_IPing_FPing_mid
#define IPing_mid_max echo_IPing_mid_max
#define IPing_FPing_req_arena_size echo_IPing_FPing_req_arena_size
#define IPing_FPing_res_arena_size echo_IPing_FPing_res_arena_size
#define IPing_FPing_req_handles echo_IPing_FPing_req_handles
#define IPing_FPing_res_handles echo_IPing_FPing_res_handles
#define IPing_FPing_err_handles echo_IPing_FPing_err_handles
#define IPing_req_arena_size echo_IPing_req_arena_size
#define IPing_res_arena_size echo_IPing_res_arena_size
#define IPing_arena_size echo_IPing_arena_size
#define IPing_req_handles echo_IPing_req_handles
#define IPing_res_handles echo_IPing_res_handles
#define IPing_err_handles echo_IPing_err_handles
#define IPing_FPing_req echo_IPing_FPing_req
#define IPing_FPing_res echo_IPing_FPing_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__IPing__INTERFACE__ */

#ifndef __echo__CPing__COMPONENT_ENDPOINTS__
#define __echo__CPing__COMPONENT_ENDPOINTS__
enum {
    echo_CPing_ping_iid,
    echo_CPing_iidMax,
};
enum {
    echo_CPing_iidOffset = 0,
};
enum {
    echo_CPing_securityIidMax,
};
enum {
    echo_CPing_component_req_arena_size = 0,
    echo_CPing_component_res_arena_size = 0,
    echo_CPing_component_arena_size = 0,
    echo_CPing_component_req_handles = 0,
    echo_CPing_component_res_handles = 0,
    echo_CPing_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CPing_ping_iid echo_CPing_ping_iid
#define CPing_iidMax echo_CPing_iidMax
#define CPing_iidOffset echo_CPing_iidOffset
#define CPing_securityIidMax echo_CPing_securityIidMax
#define CPing_component_req_arena_size echo_CPing_component_req_arena_size
#define CPing_component_res_arena_size echo_CPing_component_res_arena_size
#define CPing_component_arena_size echo_CPing_component_arena_size
#define CPing_component_req_handles echo_CPing_component_req_handles
#define CPing_component_res_handles echo_CPing_component_res_handles
#define CPing_component_err_handles echo_CPing_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__CPing__COMPONENT_ENDPOINTS__ */

#ifndef __echo__Server__COMPONENT_ENDPOINTS__
#define __echo__Server__COMPONENT_ENDPOINTS__
enum {
    echo_Server_cserver_ping_iid,
    echo_Server_iidMax,
};
enum {
    echo_Server_iidOffset = 0,
    echo_Server_cserver_iidOffset = 0,
};
enum {
    echo_Server_securityIidMax,
};
enum {
    echo_Server_component_req_arena_size = 0,
    echo_Server_component_res_arena_size = 0,
    echo_Server_component_arena_size = 0,
    echo_Server_component_req_handles = 0,
    echo_Server_component_res_handles = 0,
    echo_Server_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Server_cserver_ping_iid echo_Server_cserver_ping_iid
#define Server_iidMax echo_Server_iidMax
#define Server_iidOffset echo_Server_iidOffset
#define Server_cserver_iidOffset echo_Server_cserver_iidOffset
#define Server_securityIidMax echo_Server_securityIidMax
#define Server_component_req_arena_size echo_Server_component_req_arena_size
#define Server_component_res_arena_size echo_Server_component_res_arena_size
#define Server_component_arena_size echo_Server_component_arena_size
#define Server_component_req_handles echo_Server_component_req_handles
#define Server_component_res_handles echo_Server_component_res_handles
#define Server_component_err_handles echo_Server_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Server__COMPONENT_ENDPOINTS__ */

#ifndef __echo__Server__TASK_ENDPOINTS__
#define __echo__Server__TASK_ENDPOINTS__
enum {
    echo_Server_entity_req_arena_size =
    echo_Server_component_req_arena_size,
    echo_Server_entity_res_arena_size =
    echo_Server_component_res_arena_size,
    echo_Server_entity_arena_size =
    echo_Server_component_arena_size,
    echo_Server_entity_req_handles =
    echo_Server_component_req_handles,
    echo_Server_entity_res_handles =
    echo_Server_component_res_handles,
    echo_Server_entity_err_handles =
    echo_Server_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Server_entity_req_arena_size echo_Server_entity_req_arena_size
#define Server_entity_res_arena_size echo_Server_entity_res_arena_size
#define Server_entity_arena_size echo_Server_entity_arena_size
#define Server_entity_req_handles echo_Server_entity_req_handles
#define Server_entity_res_handles echo_Server_entity_res_handles
#define Server_entity_err_handles echo_Server_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Server__TASK_ENDPOINTS__ */

#ifndef __echo__IPing__VTABLE__
#define __echo__IPing__VTABLE__
typedef struct echo_IPing {
            const struct echo_IPing_ops *ops;
        } echo_IPing;
typedef nk_err_t
echo_IPing_FPing_fn(struct echo_IPing *, const
                    struct echo_IPing_FPing_req *,
                    const struct nk_arena *,
                    struct echo_IPing_FPing_res *,
                    struct nk_arena *);
typedef struct echo_IPing_ops {
            echo_IPing_FPing_fn *FPing;
        } echo_IPing_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IPing_FPing_fn echo_IPing_FPing_fn
#define IPing_ops echo_IPing_ops
#define IPing echo_IPing
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__IPing__VTABLE__ */

#ifndef __echo__IPing__SERVER__
#define __echo__IPing__SERVER__
typedef union echo_IPing_req {
            struct nk_message base_;
            struct echo_IPing_FPing_req FPing;
        } echo_IPing_req;
typedef union echo_IPing_res {
            struct nk_message base_;
            struct echo_IPing_FPing_res FPing;
        } echo_IPing_res;
static inline
nk_err_t echo_IPing_interface_dispatch(struct echo_IPing *impl,
                                       nk_iid_t iid,
                                       const
                                       struct nk_message *req,
                                       const
                                       struct nk_arena *req_arena,
                                       struct nk_message *res,
                                       struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case echo_IPing_FPing_mid:
            {
                struct echo_IPing_FPing_res *res_
                                            =
                                            (struct echo_IPing_FPing_res *) res;
                
                rc = impl->ops->FPing(impl, (const
                                             struct echo_IPing_FPing_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     echo_IPing_FPing_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IPing_req echo_IPing_req
#define IPing_res echo_IPing_res
#define IPing_interface_dispatch echo_IPing_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__IPing__SERVER__ */

#ifndef __echo__CPing__COMPONENT_SERVER_TYPES__
#define __echo__CPing__COMPONENT_SERVER_TYPES__
typedef struct echo_CPing_component {
            struct echo_IPing *ping;
        } echo_CPing_component;
#endif /* __echo__CPing__COMPONENT_SERVER_TYPES__ */

#ifndef __echo__CPing__COMPONENT_SERVER_DISPATCHER__
#define __echo__CPing__COMPONENT_SERVER_DISPATCHER__
static inline
void echo_CPing_component_init(struct echo_CPing_component *self,
                               struct echo_IPing *ping)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->ping = ping;
}
typedef union echo_CPing_component_req {
            struct nk_message base_;
            echo_IPing_req ping;
        } echo_CPing_component_req;
typedef union echo_CPing_component_res {
            struct nk_message base_;
            echo_IPing_res ping;
        } echo_CPing_component_res;
static inline
nk_err_t echo_CPing_component_dispatch(struct echo_CPing_component *self,
                                       nk_iid_t iidOffset,
                                       const
                                       struct nk_message *req,
                                       const
                                       struct nk_arena *req_arena,
                                       struct nk_message *res,
                                       struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case echo_CPing_ping_iid:
        return echo_IPing_interface_dispatch(self->ping,
                                             req->iid,
                                             req,
                                             req_arena,
                                             res,
                                             res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CPing_component echo_CPing_component
#define CPing_component_init echo_CPing_component_init
#define CPing_component_req echo_CPing_component_req
#define CPing_component_res echo_CPing_component_res
#define CPing_component_dispatch echo_CPing_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__CPing__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __echo__Server__COMPONENT_SERVER_TYPES__
#define __echo__Server__COMPONENT_SERVER_TYPES__
typedef struct echo_Server_component {
            struct echo_CPing_component *cserver;
        } echo_Server_component;
#endif /* __echo__Server__COMPONENT_SERVER_TYPES__ */

#ifndef __echo__Server__COMPONENT_SERVER_DISPATCHER__
#define __echo__Server__COMPONENT_SERVER_DISPATCHER__
static inline
void echo_Server_component_init(struct echo_Server_component *self,
                                struct echo_CPing_component *cserver)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->cserver = cserver;
}
typedef union echo_Server_component_req {
            struct nk_message base_;
            echo_IPing_req cserver_ping;
        } echo_Server_component_req;
typedef union echo_Server_component_res {
            struct nk_message base_;
            echo_IPing_res cserver_ping;
        } echo_Server_component_res;
static inline
nk_err_t echo_Server_component_dispatch(struct echo_Server_component *self,
                                        nk_iid_t iidOffset,
                                        const
                                        struct nk_message *req,
                                        const
                                        struct nk_arena *req_arena,
                                        struct nk_message *res,
                                        struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case echo_Server_cserver_ping_iid:
        return echo_IPing_interface_dispatch(self->cserver->ping,
                                             req->iid,
                                             req,
                                             req_arena,
                                             res,
                                             res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Server_component echo_Server_component
#define Server_component_init echo_Server_component_init
#define Server_component_req echo_Server_component_req
#define Server_component_res echo_Server_component_res
#define Server_component_dispatch echo_Server_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Server__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __echo__Server__ENTITY_SERVER__
#define __echo__Server__ENTITY_SERVER__
#define echo_Server_entity_res echo_Server_component_res
#define echo_Server_entity_req echo_Server_component_req
#define echo_Server_entity echo_Server_component
static inline
void echo_Server_entity_init(struct echo_Server_entity *self,
                             struct echo_CPing_component *cserver)
{
    echo_Server_component_init(self, cserver);
}
static inline
nk_err_t echo_Server_entity_dispatch(struct echo_Server_entity *self,
                                     const
                                     struct nk_message *req,
                                     const
                                     struct nk_arena *req_arena,
                                     struct nk_message *res,
                                     struct nk_arena *res_arena)
{
    return echo_Server_component_dispatch(self, 0,
                                          req,
                                          req_arena,
                                          res,
                                          res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Server_entity echo_Server_entity
#define Server_entity_init echo_Server_entity_init
#define Server_entity_req echo_Server_entity_req
#define Server_entity_res echo_Server_entity_res
#define Server_entity_dispatch echo_Server_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Server__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

