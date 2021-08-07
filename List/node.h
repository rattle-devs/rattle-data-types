#ifndef RATTLE_DATA_TYPES_NODE_H
#define RATTLE_DATA_TYPES_NODE_H
typedef struct NODE_STRUCT {
    void* data;
    struct NODE_STRUCT* next;
} Node;

Node* node_init(void* data, Node* next);

Node* node_next(Node* n);

//Returns pointer to data required to be free separately due to unknown type
void* node_free(Node* n);
#endif //RATTLE_DATA_TYPES_NODE_H
