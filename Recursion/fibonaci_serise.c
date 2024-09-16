// #include<stdlib.h>
// #include<stdio.h>
// #include<conio.h>
// int fibo(int a){
//     if(a == 0|| a==1){
//         return a;
//     }
//     else{
//         return fibo(a-1)+fibo(a-2);
//     }
// }
// int main(){
//     int n;
//     printf("enter the fibonaci serise number\n");
//     scanf("%d",&n);
//     int ff=fibo(n);
//     printf("sum of fib = %d",ff);
//     return 0;
// }




// #include<stdio.h>    
// int main()    
// {    
//  int n1=0,n2=1,n3,i,number;    
//  printf("Enter the number of elements:");    
//  scanf("%d",&number);    
//  printf("\n%d %d",n1,n2);
//  for(i=2;i<number;++i)  
//  {    
//   n3=n1+n2;    
//   printf(" %d",n3);    
//   n1=n2;    
//   n2=n3;    
//  }  
//   return 0;  
//  }    




//  #include<stdio.h>    
// void printFibonacci(int n){    
//     static int n1=0,n2=1,n3;    
//     if(n>0){    
//          n3 = n1 + n2;    
//          n1 = n2;    
//          n2 = n3;    
//          printf("%d ",n3);    
//          printFibonacci(n-1);    
//     }    
// }    
// int main(){    
//     int n;    
//     printf("Enter the number of elements: ");    
//     scanf("%d",&n);    
//     printf("Fibonacci Series: ");    
//     printf("%d %d ",0,1);    
//     printFibonacci(n-2);  
//   return 0;  
//  }    





#include <stdio.h>
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0; 
    }
    else if (num == 1)
    {
        return 1; 
    }
    
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}

int main()
{
    int num; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 

    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); 
    }

    return 0;
}