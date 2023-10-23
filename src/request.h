#ifndef LOHENGRIN_REQUEST_H
#define LOHENGRIN_REQUEST_H

typedef enum lh_http_method {
    LH_HTTP_METHOD_GET,
    LH_HTTP_METHOD_POST,
    LH_HTTP_METHOD_PUT,
    LH_HTTP_METHOD_PATCH,
    LH_HTTP_METHOD_HEAD,
    LH_HTTP_METHOD_DELETE,
    LH_HTTP_METHOD_CONNECT,
    LH_HTTP_METHOD_OPTIONS,
    LH_HTTP_METHOD_TRACE
} lh_http_method;

typedef struct lh_request {
} lh_request;

#endif
