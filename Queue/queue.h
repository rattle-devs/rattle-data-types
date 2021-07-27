#ifndef RATTLE_DATA_TYPES_QUEUE_H
#define RATTLE_DATA_TYPES_QUEUE_H
#include <node.h>
typedef struct QUEUE_STRUCT {
    Node* head;
    Node* tail;
} Queue;

Queue* queue_init();
Queue* queue_init_with_node(Node* node);

void queue_enqueue(Queue* queue, Node* node);

Node* queue_dequeue(Queue* queue);

void queue_free(Queue* queue);
#endif //RATTLE_DATA_TYPES_QUEUE_H
