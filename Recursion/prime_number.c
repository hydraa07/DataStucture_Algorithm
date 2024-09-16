#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int prime(int n){
    static int a=2,check=1;
    if(a==n){
        return 0;
    }
    else{
        if(n%a==0){
            check=0;
            }
            else{
                a++;
                check=1;
                prime(n);
            }
    }
    return check;
}
int main(){
    int n,f=0;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n==2){
        printf("it is the prime number\n");
    }
    else if(n<2){
        printf("the prime number is small than 2 ;\n");
    }
    else{
        f = prime(n);
        if(f==1){
            printf("the number is prime\n");
        }
        else{
            printf("the number is not prime \n");
        }
    }
    return 0;
}