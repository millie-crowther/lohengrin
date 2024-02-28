#ifndef LOHENGRIN_ROUTER_H
#define LOHENGRIN_ROUTER_H

#include <stdbool.h>
#include <stdint.h>

#include "request.h"
#include "response.h"

typedef struct lh_router_response {
    bool path_match_found;
    bool match_found;
    lh_response response;
} lh_router_response;

typedef struct lh_route {
    lh_http_method method;
    const char *path;
    lh_route_handler route_handler;
} lh_route;

typedef struct lh_router {
    lh_route *routes;
    uint32_t route_count;
} lh_router;

void lh_router_register_route(lh_router router[static 1], lh_route route);
lh_router_response router_handle_request(lh_router router[static 1], const lh_request request[static 1], lh_context context[static 1]);

#endif
