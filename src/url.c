#include "url.h"

bool lh_url_matches_path(const lh_url url, const char * path){
    // TODO: Match path variables
    return strcmp(url.path, path) == 0
}

bool lh_url_matches_method(const lh_url url, const lh_http_method method){
    return lh_view_get_handler_for_method(url.view, method) != NULL;
}
