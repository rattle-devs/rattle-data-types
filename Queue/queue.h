#ifndef RATTLE_DATA_TYPES_QUEUE_H
#define RATTLE_DATA_TYPES_QUEUE_H
#include <node.h>
#include <stdbool.h>
typedef struct QUEUE_STRUCT {
    Node* head;
    Node* tail;
} Queue;

Queue* queue_init(Node* node);

void queue_enqueue(Queue* queue, Node* node);

Node* queue_dequeue(Queue* queue);

bool queue_empty(Queue* queue);

//if queue is empty free it and returns True else just returns False
bool queue_free(Queue* queue);
#endif //RATTLE_DATA_TYPES_QUEUE_H
