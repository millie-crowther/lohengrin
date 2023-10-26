#ifndef LOHENGRIN_RESPONSE_H
#define LOHENGRIN_RESPONSE_H

#include <stdint.h>

typedef struct lh_response {
    uint16_t code;
    const char * body;
} lh_response;

const char * lh_response_get_name_for_code(uint16_t response_code);

#endif
