#include "response.h"

const char * response_code_names[] = {
    [LH_HTTP_OK] = "OK",
    [LH_HTTP_CREATED] = "Created",
    [LH_HTTP_ACCEPTED] = "Accepted",
    [LH_HTTP_NO_CONTENT] = "No Content

    [LH_HTTP_BAD_REQUEST] = "Bad Request",
    [LH_HTTP_UNAUTHORIZED] = "Unauthorized",
    [LH_HTTP_FORBIDDEN] = "Forbidden",
    [LH_HTTP_NOT_FOUND] = "Not Found",
    [LH_HTTP_METHOD_NOT_ALLOWED] = "Method Not Allowed",
    [LH_HTTP_CONFLICT] = "Conflict",
    [LH_HTTP_URI_TOO_LONG] = "URI Too Long",
    [LH_HTTP_UNPROCESSABLE_CONTENT] = "Unprocessable Content",

    [LH_HTTP_INTERNAL_SERVER_ERROR] = "Internal Server Error",
    [LH_HTTP_NOT_IMPLEMENTED] = "Not Implemented",
};


const char * lh_response_get_name_for_code(lh_http_response_code response_code){
    if (response_code >= sizeof(response_code_names) / sizeof(response_code_names[0])){
        return NULL;
    }
    return response_code_names[response_code];
}
