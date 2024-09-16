#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int num(int n){
    int a;
    if(n>0){
        printf("%d\n",n);
        num(n-1);    
}
}
int main(){
    int n;
    printf("enter last number\n");
    scanf("%d",&n);
   num(n);
    return 0;
}