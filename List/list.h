#ifndef RATTLE_DATA_TYPES_LIST_H
#define RATTLE_DATA_TYPES_LIST_H

#include <stdbool.h>
#include "node.h"

typedef struct LIST_STRUCT {
    Node* head;
    Node* tail;
} List;

List* list_init();
List* list_init_with_head(Node* head);
List* list_init_with_tail(Node* tail);
List* list_init_with_head_tail(Node* head, Node* tail);

void list_add_tail(List* list, Node* node);

void list_add_head(List* list, Node* node);

Node* list_pop_tail(List* list);

Node* list_head(List* list);

Node* list_tail(List* list);

bool list_empty(List* list);

//if list is empty free it and returns True else just returns False
bool list_free(List* list);
#endif //RATTLE_DATA_TYPES_LIST_H
