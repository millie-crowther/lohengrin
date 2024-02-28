#ifndef LOHENGRIN_ROUTER_H
#define LOHENGRIN_ROUTER_H

#include <stdbool.h>
#include <stdint.h>

#include "request.h"
#include "response.h"

typedef struct lh_router {
    lh_url *urls;
    uint32_t url_count;
} lh_router;

void lh_router_register_route(lh_router router[static 1], lh_url url);
lh_router_response router_handle_request(lh_router router[static 1], const lh_request request[static 1], lh_context context[static 1]);

#endif
