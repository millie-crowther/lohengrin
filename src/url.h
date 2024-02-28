#ifndef LOHENGRIN_URL_H
#define LOHENGRIN_URL_H

#include <stdbool.h>

#include "request.h"
#include "view.h"

typedef struct lh_url {
    const char * path;
    lh_view view;
} lh_url;

bool lh_url_matches_path(const lh_url url, const char * path);
bool lh_url_matches_method(const lh_url url, const lh_http_method method);

#endif
