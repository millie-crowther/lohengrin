#include "request.h"

#include <string.h>

struct method_name_mapping {
    lh_http_method method;
    const char * string;
};

static method_name_mapping method_map[] = {
    {LH_HTTP_METHOD_GET, "GET"},
    {LH_HTTP_METHOD_POST, "POST"},
    {LH_HTTP_METHOD_PUT, "PUT"},
    {LH_HTTP_METHOD_PATCH, "PATCH"},
    {LH_HTTP_METHOD_HEAD, "HEAD"},
    {LH_HTTP_METHOD_DELETE, "DELETE"},
    {LH_HTTP_METHOD_CONNECT, "CONNECT"},
    {LH_HTTP_METHOD_OPTIONS, "OPTIONS"},
    {LH_HTTP_METHOD_TRACE, "TRACE"},
    {LH_HTTP_METHOD_UNKNOWN, NULL}
};

static lh_http_method get_method_from_string(const char * string){
    for (int32_t i = 0; i < sizeof(method_map) / sizeof(method_map[0]); i++){
        if (strcmp(method_map[i].string, string) == 0){
            return method_map[i].method;
        }
    }

    return LH_HTTP_METHOD_UNKNOWN;
}

lh_request request_create(const char * request_string){

}

void request_destroy(lh_request * request){
    const char * first_line_regex = "(GET|POST|PATCH|PUT|DELETE|HEAD|OPTIONS|CONNECT|TRACE) (\/\S*) (HTTP\/1\.[01])";
}
