#ifndef LOHENGRIN_ROUTER_H
#define LOHENGRIN_ROUTER_H

#include <stdint.h>

#include "request.h"

typedef struct lh_context {

} lh_context;

typedef struct lh_route {
    
} lh_route;

typedef struct lh_router {
    lh_route * routes;
    uint64_t route_count;
} lh_router;

#endif
