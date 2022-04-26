#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


typedef struct element{ 
    char data[1024]; 
    struct element* next; 
}element;


void push(char data[1024], element** stack);
void pop(struct element** stack);
void top(struct element* stack);
