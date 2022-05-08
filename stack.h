#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char value[1024];
    struct Node* next;
}Node;

void PUSH(Node** root, char value[1024]);

char* TOP(Node** root);

char* POP(Node** root);

void CLEAR(Node** root);