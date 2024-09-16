#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int power(int n, int p){
    static int a=1;
    if(p==0){
        return 1;
    }
    else{
        a = a*n;
        power(n,p-1);
    }
    return a;
}
int main(){
    int n,p,result;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("enter the power\n");
    scanf("%d",&p);
    result = power(n,p);
    printf("result is = %d",result);
    return 0;
}