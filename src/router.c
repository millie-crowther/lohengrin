#include "router.h"

#include <string.h>

static bool route_matches_path(lh_route route[static 1], const char *path) {
    // TODO: allow patterns
    return strcmp(route->path, path) == 0;
}

lh_router_response router_handle_request(lh_router router[static 1], const lh_request request[1], lh_context context[1]) {
    // TODO: router response should be passed via pointer
    lh_router_response router_response;
    for (uint32_t i = 0; i < router->route_count; i++) {
        bool path_match_found = route_matches_path(&router->routes[i], request->path);
        router_response.path_match_found |= path_match_found;

        if (path_match_found && router->routes[i].method == request->method){
            router_response.match_found = true;
            router_response.response = router->routes[i].route_handler(request, context);
            break;
        }
    }
    return router_response;
}
