#ifndef LOHENGRIN_DATABASE_H
#define LOHENGRIN_DATABASE_H

#include <stdint.h>

typedef struct lh_query {
    const char ** select;
    const char * from;
} lh_query;

#endif
