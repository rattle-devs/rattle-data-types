#ifndef RATTLE_DATA_TYPES_QUEUE_H
#define RATTLE_DATA_TYPES_QUEUE_H
#include <node.h>
#include <stdbool.h>
typedef struct QUEUE_STRUCT {
    Node* head;
    Node* tail;
} Queue;

Queue* queue_init(Node* node);

//Never enqueue NULL
void queue_push(Queue* q, Node* node);

Node* queue_pop(Queue* q);

bool queue_is_empty(Queue* q);

//if queue is empty free it and returns True else just returns False
bool queue_free(Queue* q);
#endif //RATTLE_DATA_TYPES_QUEUE_H
