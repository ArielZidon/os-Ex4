#include "stack.h"

void PUSH(Node** root, char value[1024])
{
    Node* new_node = malloc(sizeof(Node));
    int i = 0;
    if(new_node ==  NULL){
        printf("Error to PUSH");
    }
    new_node->next = NULL;
    while(value[i] != '\0'){
        new_node->value[i] = value[i];
        i++;
    }
    Node* curr = *root;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node;
}

char* TOP(Node** root)
{
    Node* curr = *root;
    while(curr->next != NULL){
        curr = curr->next;
    }
    return curr->value;
}

char* POP(Node** root)
{
    if ((*root) == NULL){
        printf("ERROR: the stack is empty");
        exit(1);
    }
    Node* curr = *root;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    curr->next = NULL;
    return curr->next->value;
}

void CLEAR(Node** root){
    (*root)->next = NULL;
    for(int i = 0; i < 1024; i++){
        (*root)->value[i] = '\0';
    }
}