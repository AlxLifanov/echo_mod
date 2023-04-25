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

#ifndef __echo__IPing__CLIENT__
#define __echo__IPing__CLIENT__
typedef struct echo_IPing_proxy {
            struct echo_IPing base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } echo_IPing_proxy;
static inline
nk_err_t echo_IPing_FPing_proxy(struct echo_IPing_proxy *self,
                                struct echo_IPing_FPing_req *req,
                                const
                                struct nk_arena *req_arena,
                                struct echo_IPing_FPing_res *res,
                                struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         echo_IPing_FPing_mid);
    nk_msg_set_ncaps(req,
                     echo_IPing_FPing_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         echo_IPing_FPing_mid);
    nk_msg_set_ncaps(res,
                     echo_IPing_FPing_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void echo_IPing_proxy_init(struct echo_IPing_proxy *self,
                           struct nk_transport *transport,
                           nk_iid_t iid)
{
    static const struct echo_IPing_ops ops =
                                       {(echo_IPing_FPing_fn *) &echo_IPing_FPing_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t echo_IPing_FPing(struct echo_IPing *self,
                          struct echo_IPing_FPing_req *req,
                          const
                          struct nk_arena *req_arena,
                          struct echo_IPing_FPing_res *res,
                          struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->FPing != NK_NULL);
    return self->ops->FPing(self, req, req_arena,
                            res, res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IPing_FPing_proxy echo_IPing_FPing_proxy
#define IPing_FPing echo_IPing_FPing
#define IPing_proxy echo_IPing_proxy
#define IPing_proxy_init echo_IPing_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __echo__IPing__CLIENT__ */

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

#ifndef __echo__IPing__TESTS__
#define __echo__IPing__TESTS__
static inline
nk_err_t echo_IPing_FPing_test_req(struct echo_IPing_FPing_req *msg,
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
nk_err_t echo_IPing_FPing_test_res(struct echo_IPing_FPing_res *msg,
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
nk_err_t echo_IPing_FPing_test_err(struct echo_IPing_FPing_err *msg,
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
#endif /* __echo__IPing__TESTS__ */

#pragma GCC diagnostic pop

