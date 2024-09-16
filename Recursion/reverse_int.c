#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int reverseint(int n){
    int num;
    static int a=0;
    if(n==0){
        return n;
    }
    else{
        num = n%10;
        a = a*10+num;
        reverseint(n/10);
    }
    return a;
}
int main(){
    int n,result;
    printf("enter the number \n");
    scanf("%d",&n);
    result  = reverseint(n);
    printf("integer is = %d\n  reverse integer is = %d",n,result);
    return 0;
}