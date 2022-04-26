#include<stdio.h>
#include<stdlib.h>
#include"stackC.h"


void push(char data[1024], element** stack){
    element* temp = (element*)malloc(sizeof(element));
    for(int i = 0 ; i<1024; i++)
    {
    temp -> data[i] = data[i]; 
    }

    temp -> data[1023] = '\0';
    temp -> next = *stack;  
    (*stack) = temp;  
}

void pop(struct element** stack){
    if(*stack != NULL){
        printf("Element popped: %s\n",(*stack) -> data);
        element* temp = *stack;
        *stack = (*stack) -> next;
        free(temp);
    }
    else{
        printf("The stack is empty.\n");
    }
}

void top(struct element* stack){
    if(stack != NULL){
    printf("Element on top: %s\n", stack -> data);
    }
    else{
        printf("The stack is empty.\n");
    }
}

int main() {
    struct element* root = (struct element*)malloc(sizeof(struct element));
    char a[1024] = "ariel and afik";

    for(int i = 0; i<1024 ; i++)
    {
    root -> data[i] = a[i];
    }
    root -> data[1023] = '\0';

    root -> next = NULL;
    top(root);
    push("just doing",&root);
    top(root);
    push("Ex4 in os corse",&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    top(root);
    pop(&root);
    return 0;
}