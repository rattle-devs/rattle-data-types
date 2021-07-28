#ifndef RATTLE_DATA_TYPES_NODE_H
#define RATTLE_DATA_TYPES_NODE_H
typedef struct NODE_STRUCT Node;
struct Node {
    void* data;
    struct Node* next;
};

Node* node_init(void* data);

Node* node_next(Node* node);

//Returns pointer to data required to be free separately due to unknown type
void* node_free(Node* node);
#endif //RATTLE_DATA_TYPES_NODE_H
