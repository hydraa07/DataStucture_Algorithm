// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// int counter(int n){
//     static int count =0;
//     if(n>0){
//         count++;
//         counter(n/10);
//     }
//     else{
//         return count;
//     }
    
// }
// int main(){
//     int n;
//     int count =0;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     count = counter(n);
//     printf("digit is = %d",count);
//     return 0;
// }

/***********************sum of digits given the number**********************************************/
#include <stdio.h>
 
int countDigits(int num)
{
    static int a, b=0;
     
    if(num>0)
    {
        b = (num%10)+countDigits(num/10);
    }
    else
    {
        return b;
    }
}
int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     return 0;
}