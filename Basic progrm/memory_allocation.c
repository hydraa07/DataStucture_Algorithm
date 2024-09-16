#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int i,n;
    float sum=0;
    float avg;
    printf("enter the size of array\n");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("The required memory is not available in RAM\n");
        getch();
        exit(0);
        // return 0;
    }
    else{
        printf("enter the array ele\n");
        for(int i=0;i<n;i++){
            scanf("%d",ptr+i);
        }
        for(int i=0;i<n;i++){
            sum = sum + (*(ptr+i));
        }
        printf("sum of array = %f\n",sum);
        avg = sum/n;
        printf("the avg is = %f\n",avg);
    }
    // return 0;
    getch();
}