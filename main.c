#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.c"

int main(){
    Node* root = malloc(sizeof(Node));
    char str[1029] = {'\0'};
    char temp[1024] = {'\0'};
    scanf("%[^\n]%*c", str);
    while (strncmp(str, "EXIT", 4))
    {
        if(strncmp(str, "PUSH", 4) == 0){
            for(int i = 0; i < 1024 && str[i] != '\0'; i++){
                temp[i] = str[i+5];
            }
            PUSH(&root, temp);
        }
        else if(strncmp(str, "TOP", 3) == 0){
            TOP(&root);
        }
        else if(strncmp(str, "POP", 3) == 0){
            POP(&root);
        }
        else if(strncmp(str, "CLEAR", 5) == 0){
            CLEAR(&root);
        }

        scanf("%[^\n]%*c", str);
    }
    return 0;
}