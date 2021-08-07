#include <malloc.h>
#include "node.h"

Node* node_init(void* data, Node* next){
    Node* n = (Node*)malloc(sizeof(Node));
    if(n != NULL){
        n->data = data;
        n->next = next;
        return n;
    }
    return n;
}

Node* node_next(Node* n){
    return n->next;
}

void* node_free(Node* n){
    void* data = n->data;
    free(n);
    return data;
}