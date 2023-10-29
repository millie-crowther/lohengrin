#ifndef LOHENGRIN_REQUEST_H
#define LOHENGRIN_REQUEST_H

typedef enum lh_http_method {
    LH_HTTP_METHOD_GET = 0,
    LH_HTTP_METHOD_POST = 1,
    LH_HTTP_METHOD_PUT = 2,
    LH_HTTP_METHOD_PATCH = 3,
    LH_HTTP_METHOD_HEAD = 4,
    LH_HTTP_METHOD_DELETE = 5,
    LH_HTTP_METHOD_CONNECT = 6,
    LH_HTTP_METHOD_OPTIONS = 7,
    LH_HTTP_METHOD_TRACE = 8,
    LH_HTTP_METHOD_UNKNOWN = 9
} lh_http_method;

typedef struct lh_request {
    lh_http_method method;
    const char * path;
    const char * body;
} lh_request;

lh_request request_create(const char * request_string);
void request_destroy(lh_request request[static 1]);

#endif
