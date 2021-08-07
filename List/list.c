#include <malloc.h>
#include "list.h"

List* list_init(Node* head, Node* tail){
    List* l = (List*)malloc(sizeof(List));
    if(l != NULL){
        l->head = head;
        if(tail != NULL){
            l->tail = tail;
            tail->next = head;
        } else{
            l->tail = head;
        }
        return l;
    }
    return l;
}

void list_add_tail(List* l, Node* node){
    if(l->tail == NULL){
        l->tail = node;
        l->head = node;
    } else{
        node->next = l->tail;
        l->tail = node;
    }
}

void list_add_head(List* l, Node* node){
    if(l->head == NULL){
        l->head = node;
        if(l->tail == NULL){
            l->tail = node;
        } else {
            l->tail->next = node;
        }
    } else {
        l->head->next = node;
        l->head = node;
    }
}

Node* list_pop_tail(List* l){
    Node* tmp = l->tail;
    if(tmp != NULL)
        l->tail = tmp->next;
    else
        l->head = NULL;
    return tmp;
}

Node* list_head(List* l){
    return l->head;
}

Node* list_tail(List* l){
    return l->tail;
}

bool list_empty(List* l){
    return l->tail == NULL;
}

//if list is empty free it and returns True else just returns False
bool list_free(List* l){
    if(l->tail == NULL && l->head == NULL){
        free(l);
        return true;
    }
    return false;
}