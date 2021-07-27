#ifndef RATTLE_DATA_TYPES_LIST_H
#define RATTLE_DATA_TYPES_LIST_H
#include "node.h"
typedef struct LIST_STRUCT {
    Node* head;
    Node* tail;
} List;

List* list_init(Node* head);

void list_add_tail(List* list, Node* node);

void list_add_head(List* list, Node* node);

Node* list_pop_tail(List* list);

Node* list_head(List* list);

Node* list_tail(List* list);
#endif //RATTLE_DATA_TYPES_LIST_H
