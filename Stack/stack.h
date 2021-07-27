#ifndef RATTLE_DATA_TYPES_STACK_H
#define RATTLE_DATA_TYPES_STACK_H
#include <node.h>
typedef struct STACK_STRUCT {
    Node* top;
} Stack;

Stack* stack_init();
Stack* stack_init_with_node();

void stack_push(Stack* stack, Node* node);

Node* stack_pop(Stack* stack);

Node* stack_peek(Stack* stack);
#endif //RATTLE_DATA_TYPES_STACK_H
