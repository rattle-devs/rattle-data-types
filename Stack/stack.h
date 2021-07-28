#ifndef RATTLE_DATA_TYPES_STACK_H
#define RATTLE_DATA_TYPES_STACK_H
#include <stdbool.h>
#include <node.h>
typedef struct STACK_STRUCT {
    Node* top;
} Stack;

Stack* stack_init();
Stack* stack_init_with_node();

void stack_push(Stack* stack, Node* node);

Node* stack_pop(Stack* stack);

Node* stack_peek(Stack* stack);

bool stack_empty(Stack* stack);

//if stack is empty free it and returns True else just returns False
bool stack_free(Stack* stack);
#endif //RATTLE_DATA_TYPES_STACK_H
