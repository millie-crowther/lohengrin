#include "url.h"

bool lh_url_matches_path(const lh_url url, const char * path){
    // TODO: Match path variables
    return strcmp(url.path, path) == 0
}

bool lh_url_matches_method(const lh_url url, const lh_http_method method){
    if (method == LH_HTTP_METHOD_GET)     return url.view.get     != NULL; 
    if (method == LH_HTTP_METHOD_POST)    return url.view.post    != NULL; 
    if (method == LH_HTTP_METHOD_PUT)     return url.view.put     != NULL; 
    if (method == LH_HTTP_METHOD_PATCH)   return url.view.patch   != NULL; 
    if (method == LH_HTTP_METHOD_HEAD)    return url.view.head    != NULL; 
    if (method == LH_HTTP_METHOD_DELETE)  return url.view.delete  != NULL; 
    if (method == LH_HTTP_METHOD_OPTIONS) return url.view.options != NULL; 
    
    return false
}
