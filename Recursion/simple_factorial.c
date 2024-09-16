#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("enter the factorial number\n");
    scanf("%d",&n);
    int fac = factorial(n);
    printf("factorial = %d",fac);
    return 0;
}