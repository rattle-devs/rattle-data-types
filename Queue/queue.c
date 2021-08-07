#include <malloc.h>
#include "queue.h"

Queue *queue_init(Node *node) {
    Queue *q = (Queue *) malloc(sizeof(Queue));
    if (q != NULL) {
        q->head = node;
        q->tail = node;
        return q;
    }
    return q;
}

void queue_push(Queue *q, Node *node) {
    if (node == NULL)
        return;

    if (q->tail == NULL) {
        q->head = node;
        q->tail = node;
    } else {
        q->tail->next = node;
        q->tail = node;
    }
}

Node *queue_pop(Queue *q) {
    Node *tmp = q->head;
    if (tmp != NULL) {
        q->head = tmp->next;
        if (q->head == NULL)
            q->tail = NULL;
    }
    return tmp;
}

bool queue_is_empty(Queue *q) {
    return q->tail == NULL;
}

bool queue_free(Queue *q){
    if (q->tail == NULL && q->head == NULL){
        free(q);
        return true;
    }
    return false;
}