#ifndef RATTLE_DATA_TYPES_LIST_H
#define RATTLE_DATA_TYPES_LIST_H

#include <stdbool.h>
#include "node.h"

typedef struct LIST_STRUCT {
    Node* head;
    Node* tail;
} List;

List* list_init(Node* head, Node* tail);

void list_add_tail(List* l, Node* node);

void list_add_head(List* l, Node* node);

Node* list_pop_tail(List* l);

Node* list_head(List* l);

Node* list_tail(List* l);

bool list_is_empty(List* l);

//if list is empty free it and returns True else just returns False
bool list_free(List* l);
#endif //RATTLE_DATA_TYPES_LIST_H
