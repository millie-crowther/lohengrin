#ifndef LOHENGRIN_DATABASE_H
#define LOHENGRIN_DATABASE_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LOHENGRIN_SELECT_COLUMN_MAX
#define LOHENGRIN_SELECT_COLUMN_MAX 32
#endif

typedef struct lh_condition {
    const char * text;
    struct lh_condition * sub_conditions[2];
} lh_condition;

lh_condition * lh_and(lh_condition * left, lh_condition * right){
    lh_condition * result = malloc(sizeof(lh_condition));
    *result = (lh_condition){
        .sub_conditions = {left, right},
        .text = "left text AND right text",
    };
    return result;
}

lh_condition * lh_equals_int(const char * field, int value){
    lh_condition * result = malloc(sizeof(lh_condition));
    *result = (lh_condition) {
        .text = "field == value"
    };
    return result;
}

typedef struct lh_query {
    const char * select[LOHENGRIN_SELECT_COLUMN_MAX];
    const char * from;
    lh_condition * where;
    const uint64_t * limit;
} lh_query;

#define lh_limit(x) &(const uint64_t){x}

typedef enum lh_database_type {
    LH_DATABASE_TYPE_MYSQL,
    LH_DATABASE_TYPE_POSTGRESQL
} lh_database_type;

typedef struct lh_database_connection {
    lh_database_type database_type;
    const char * host;
    uint16_t port;
    const char * username;
    const char * password;
} lh_database_connection;

typedef struct lh_cursor {
    lh_database_connection connection;
} lh_cursor;

typedef struct lh_query_result {

} lh_query_result;

lh_query_result cursor_execute_query(lh_cursor * cursor, lh_query * query);

#endif
