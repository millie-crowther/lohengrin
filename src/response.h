#ifndef LOHENGRIN_RESPONSE_H
#define LOHENGRIN_RESPONSE_H

typedef enum lh_http_response_code {
    LH_HTTP_OK = 200,
    LH_HTTP_CREATED = 201,
    LH_HTTP_ACCEPTED = 202,
    LH_HTTP_NO_CONTENT = 204,
    
    LH_HTTP_BAD_REQUEST = 400,
    LH_HTTP_UNAUTHORIZED = 401,
    LH_HTTP_FORBIDDEN = 403,
    LH_HTTP_NOT_FOUND = 404,
    LH_HTTP_METHOD_NOT_ALLOWED = 405,
    LH_HTTP_CONFLICT = 409,
    LH_HTTP_URI_TOO_LONG = 414,
    LH_HTTP_UNPROCESSABLE_CONTENT = 422,

    LH_HTTP_INTERNAL_SERVER_ERROR = 500,
    LH_HTTP_NOT_IMPLEMENTED = 501,
} lh_http_response_code;

typedef struct lh_response {
    lh_http_response_code http_status_code;
    const char * body;
} lh_response;

const char * lh_response_get_name_for_code(lh_http_response_code response_code);

#endif
