#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __echo__Ping__INTERFACE__
#define __echo__Ping__INTERFACE__
enum {
    echo_Ping_Ping_mid,
    echo_Ping_mid_max,
};
enum {
    echo_Ping_Ping_req_arena_size = 0,
    echo_Ping_Ping_res_arena_size = 0,
    echo_Ping_Ping_req_handles = 0,
    echo_Ping_Ping_res_handles = 0,
    echo_Ping_Ping_err_handles = 0,
    echo_Ping_req_arena_size = 0,
    echo_Ping_res_arena_size = 0,
    echo_Ping_arena_size = 0,
    echo_Ping_req_handles = 0,
    echo_Ping_res_handles = 0,
    echo_Ping_err_handles = 0,
};
typedef struct __nk_packed echo_Ping_Ping_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t value;
        } echo_Ping_Ping_req;
#pragma pack(push, 8) /* echo_Ping_Ping_res */
typedef struct echo_Ping_Ping_err {
            __nk_alignas(8)
            struct nk_message base_;
        } echo_Ping_Ping_err;
typedef struct echo_Ping_Ping_res {
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
                struct echo_Ping_Ping_err err_;
            };
        } echo_Ping_Ping_res;
#pragma pack(pop) /* echo_Ping_Ping_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Ping_Ping_mid echo_Ping_Ping_mid
#define Ping_mid_max echo_Ping_mid_max
#define Ping_Ping_req_arena_size echo_Ping_Ping_req_arena_size
#define Ping_Ping_res_arena_size echo_Ping_Ping_res_arena_size
#define Ping_Ping_req_handles echo_Ping_Ping_req_handles
#define Ping_Ping_res_handles echo_Ping_Ping_res_handles
#define Ping_Ping_err_handles echo_Ping_Ping_err_handles
#define Ping_req_arena_size echo_Ping_req_arena_size
#define Ping_res_arena_size echo_Ping_res_arena_size
#define Ping_arena_size echo_Ping_arena_size
#define Ping_req_handles echo_Ping_req_handles
#define Ping_res_handles echo_Ping_res_handles
#define Ping_err_handles echo_Ping_err_handles
#define Ping_Ping_req echo_Ping_Ping_req
#define Ping_Ping_res echo_Ping_Ping_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__INTERFACE__ */

#ifndef __echo__Server__COMPONENT_ENDPOINTS__
#define __echo__Server__COMPONENT_ENDPOINTS__
enum {
    echo_Server_Server_ping_iid,
    echo_Server_iidMax,
};
enum {
    echo_Server_iidOffset = 0,
    echo_Server_Server_iidOffset = 0,
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
#define Server_Server_ping_iid echo_Server_Server_ping_iid
#define Server_iidMax echo_Server_iidMax
#define Server_iidOffset echo_Server_iidOffset
#define Server_Server_iidOffset echo_Server_Server_iidOffset
#define Server_securityIidMax echo_Server_securityIidMax
#define Server_component_req_arena_size echo_Server_component_req_arena_size
#define Server_component_res_arena_size echo_Server_component_res_arena_size
#define Server_component_arena_size echo_Server_component_arena_size
#define Server_component_req_handles echo_Server_component_req_handles
#define Server_component_res_handles echo_Server_component_res_handles
#define Server_component_err_handles echo_Server_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Server__COMPONENT_ENDPOINTS__ */

#ifndef __echo__Ping__COMPONENT_ENDPOINTS__
#define __echo__Ping__COMPONENT_ENDPOINTS__
enum {
    echo_Ping_ping_iid,
    echo_Ping_iidMax,
};
enum {
    echo_Ping_iidOffset = 0,
};
enum {
    echo_Ping_securityIidMax,
};
enum {
    echo_Ping_component_req_arena_size = 0,
    echo_Ping_component_res_arena_size = 0,
    echo_Ping_component_arena_size = 0,
    echo_Ping_component_req_handles = 0,
    echo_Ping_component_res_handles = 0,
    echo_Ping_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Ping_ping_iid echo_Ping_ping_iid
#define Ping_iidMax echo_Ping_iidMax
#define Ping_iidOffset echo_Ping_iidOffset
#define Ping_securityIidMax echo_Ping_securityIidMax
#define Ping_component_req_arena_size echo_Ping_component_req_arena_size
#define Ping_component_res_arena_size echo_Ping_component_res_arena_size
#define Ping_component_arena_size echo_Ping_component_arena_size
#define Ping_component_req_handles echo_Ping_component_req_handles
#define Ping_component_res_handles echo_Ping_component_res_handles
#define Ping_component_err_handles echo_Ping_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__COMPONENT_ENDPOINTS__ */

#ifndef __echo__Server__ENTITY_ENDPOINTS__
#define __echo__Server__ENTITY_ENDPOINTS__
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
#endif /* __echo__Server__ENTITY_ENDPOINTS__ */

#ifndef __echo__Ping__VTABLE__
#define __echo__Ping__VTABLE__
typedef struct echo_Ping {
            const struct echo_Ping_ops *ops;
        } echo_Ping;
typedef nk_err_t
echo_Ping_Ping_fn(struct echo_Ping *, const
                  struct echo_Ping_Ping_req *,
                  const struct nk_arena *,
                  struct echo_Ping_Ping_res *,
                  struct nk_arena *);
typedef struct echo_Ping_ops {
            echo_Ping_Ping_fn *Ping;
        } echo_Ping_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Ping_Ping_fn echo_Ping_Ping_fn
#define Ping_ops echo_Ping_ops
#define Ping echo_Ping
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__VTABLE__ */

#ifndef __echo__Ping__SERVER__
#define __echo__Ping__SERVER__
typedef union echo_Ping_req {
            struct nk_message base_;
            struct echo_Ping_Ping_req Ping;
        } echo_Ping_req;
typedef union echo_Ping_res {
            struct nk_message base_;
            struct echo_Ping_Ping_res Ping;
        } echo_Ping_res;
static inline
nk_err_t echo_Ping_interface_dispatch(struct echo_Ping *impl,
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
            
          case echo_Ping_Ping_mid:
            {
                struct echo_Ping_Ping_res *res_ =
                                          (struct echo_Ping_Ping_res *) res;
                
                rc = impl->ops->Ping(impl, (const
                                            struct echo_Ping_Ping_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     echo_Ping_Ping_res_handles);
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
#define Ping_req echo_Ping_req
#define Ping_res echo_Ping_res
#define Ping_interface_dispatch echo_Ping_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__SERVER__ */

#ifndef __echo__Ping__COMPONENT_SERVER_TYPES__
#define __echo__Ping__COMPONENT_SERVER_TYPES__
typedef struct echo_Ping_component {
            struct echo_Ping *ping;
        } echo_Ping_component;
#endif /* __echo__Ping__COMPONENT_SERVER_TYPES__ */

#ifndef __echo__Server__COMPONENT_SERVER_TYPES__
#define __echo__Server__COMPONENT_SERVER_TYPES__
typedef struct echo_Server_component {
            struct echo_Ping_component *Server;
        } echo_Server_component;
#endif /* __echo__Server__COMPONENT_SERVER_TYPES__ */

#ifndef __echo__Ping__COMPONENT_SERVER_DISPATCHER__
#define __echo__Ping__COMPONENT_SERVER_DISPATCHER__
static inline
void echo_Ping_component_init(struct echo_Ping_component *self,
                              struct echo_Ping *ping)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->ping = ping;
}
typedef union echo_Ping_component_req {
            struct nk_message base_;
            echo_Ping_req ping;
        } echo_Ping_component_req;
typedef union echo_Ping_component_res {
            struct nk_message base_;
            echo_Ping_res ping;
        } echo_Ping_component_res;
static inline
nk_err_t echo_Ping_component_dispatch(struct echo_Ping_component *self,
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
        
      case echo_Ping_ping_iid:
        return echo_Ping_interface_dispatch(self->ping,
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
#define Ping_component echo_Ping_component
#define Ping_component_init echo_Ping_component_init
#define Ping_component_req echo_Ping_component_req
#define Ping_component_res echo_Ping_component_res
#define Ping_component_dispatch echo_Ping_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __echo__Server__COMPONENT_SERVER_DISPATCHER__
#define __echo__Server__COMPONENT_SERVER_DISPATCHER__
static inline
void echo_Server_component_init(struct echo_Server_component *self,
                                struct echo_Ping_component *Server)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->Server = Server;
}
typedef union echo_Server_component_req {
            struct nk_message base_;
            echo_Ping_req Server_ping;
        } echo_Server_component_req;
typedef union echo_Server_component_res {
            struct nk_message base_;
            echo_Ping_res Server_ping;
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
        
      case echo_Server_Server_ping_iid:
        return echo_Ping_interface_dispatch(self->Server->ping,
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
                             struct echo_Ping_component *Server)
{
    echo_Server_component_init(self, Server);
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

