#include "router.h"

#include <string.h>

lh_response lh_router_handle_request(lh_router router[static 1], const lh_request request[1], lh_context context[1]) {
    for (uint32_t i = 0; i < router.url_count; i++){
        lh_url url = router.urls[i];
        if (lh_url_matches_path(url, request.path)){
            if (lh_url_matches_method(url, request.method)){
                lh_handler handler = lh_view_get_handler_for_method(url.view, request.method);
                return handler(request, context);
            } else {
                return (lh_response) { .http_status_code = LH_HTTP_METHOD_NOT_ALLOWED };
            }
        }
    }

    return (lh_response) { .http_status_code = LH_HTTP_NOT_FOUND };
}
