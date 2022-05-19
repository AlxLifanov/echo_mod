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

#ifndef __echo__Ping__CLIENT__
#define __echo__Ping__CLIENT__
typedef struct echo_Ping_proxy {
            struct echo_Ping base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } echo_Ping_proxy;
static inline
nk_err_t echo_Ping_Ping_proxy(struct echo_Ping_proxy *self,
                              struct echo_Ping_Ping_req *req,
                              const
                              struct nk_arena *req_arena,
                              struct echo_Ping_Ping_res *res,
                              struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         echo_Ping_Ping_mid);
    nk_msg_set_ncaps(req,
                     echo_Ping_Ping_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         echo_Ping_Ping_mid);
    nk_msg_set_ncaps(res,
                     echo_Ping_Ping_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void echo_Ping_proxy_init(struct echo_Ping_proxy *self,
                          struct nk_transport *transport,
                          nk_iid_t iid)
{
    static const struct echo_Ping_ops ops =
                                      {(echo_Ping_Ping_fn *) &echo_Ping_Ping_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t echo_Ping_Ping(struct echo_Ping *self,
                        struct echo_Ping_Ping_req *req,
                        const
                        struct nk_arena *req_arena,
                        struct echo_Ping_Ping_res *res,
                        struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->Ping != NK_NULL);
    return self->ops->Ping(self, req, req_arena,
                           res, res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Ping_Ping_proxy echo_Ping_Ping_proxy
#define Ping_Ping echo_Ping_Ping
#define Ping_proxy echo_Ping_proxy
#define Ping_proxy_init echo_Ping_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__Ping__CLIENT__ */

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

#ifndef __echo__Ping__TESTS__
#define __echo__Ping__TESTS__
static inline
nk_err_t echo_Ping_Ping_test_req(struct echo_Ping_Ping_req *msg,
                                 struct nk_arena *arena,
                                 int (*rand)(void),
                                 nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->value = (nk_uint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t echo_Ping_Ping_test_res(struct echo_Ping_Ping_res *msg,
                                 struct nk_arena *arena,
                                 int (*rand)(void),
                                 nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->result = (nk_uint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t echo_Ping_Ping_test_err(struct echo_Ping_Ping_err *msg,
                                 struct nk_arena *arena,
                                 int (*rand)(void),
                                 nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
#endif /* __echo__Ping__TESTS__ */

#pragma GCC diagnostic pop

