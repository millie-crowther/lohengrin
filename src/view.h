#ifndef LOHENGRIN_VIEW_H
#define LOHENGRIN_VIEW_H

#include "request.h"

typedef struct lh_context {

} lh_context;

typedef lh_response (*lh_handler)(const lh_request *, lh_context *);

typedef struct lh_view {
    lh_handler get;
    lh_handler post;
    lh_handler put;
    lh_handler patch;
    lh_handler head;
    lh_handler delete;
    lh_handler options; // TODO: Default value for options
} lh_view;

lh_handler lh_view_get_handler_for_method(lh_view view, lh_http_method method);

#endif
