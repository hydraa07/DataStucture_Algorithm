#include<stdio.h>
#include<conio.h>
int main(){
    int n,pos;
    printf("enter length of array\n");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("enter the element of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is =\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\nenter the delete position\n");
    scanf("%d",&pos);
    pos--;
    printf("The new array is =\n");
    for(int i=0;i<n-1;i++){
        if(pos<=i){
            arr[i]=arr[i+1];
        }
        printf("%d\n",arr[i]);
    }
    return 0;
}