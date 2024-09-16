#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *msg;
    msg = (char*)malloc(25*sizeof(char));
    strcpy(msg,"i am ravindra panwar");
    printf("string is \n %s",msg);
    msg = (char*)realloc(msg , 10);
    strcpy(msg,"iamravindra");
    printf("string is \n %s\n",msg);
    free(msg);
    if(msg == NULL){
        printf("khali hai ree baba");
        printf("sss = %s",msg);
    }
    getch();
}