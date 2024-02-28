#ifndef LOHENGRIN_URL_H
#define LOHENGRIN_URL_H

#include "view.h"

typedef struct lh_url {
    const char * path;
    lh_view view;
} lh_url;

#endif
