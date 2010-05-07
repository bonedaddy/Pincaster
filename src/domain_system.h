
#ifndef __DOMAIN_SYSTEM_H__
#define __DOMAIN_SYSTEM_H__ 1

int handle_domain_system(struct evhttp_request * const req,
                         HttpHandlerContext * const context,
                         char *uri, char *opts, _Bool * const write_to_log,
                         const _Bool fake_req);

int handle_op_system_ping(SystemPingOp * const ping_op,
                          HttpHandlerContext * const context);

#endif