#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int sum(int n){
    // int b=0;
    if(n>=1){
        printf("number = %d\n",n);
        return n+sum(n-1);
    }
}
int main(){
    int n;
     printf("enter the number\n");
     scanf("%d",&n);
     int a = sum(n);
     printf("sum number = %d\n",a);
    return 0;
}