#include<stdio.h>
#include<conio.h>
int main(){
    int n,m;
    printf("enter the first element size \n");
    scanf("%d",&n);
    printf("\nenter the second element size \n");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    int arr3[m+n];
    printf("\nenter the first element array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nenter the second element array\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    printf("the marge array is = \n");
    for(int i=0;i<m+n;i++){
        if(i>=n){
            arr3[i]=arr2[i-(n)];

        }
        else if(i<n){
            arr3[i]=arr1[i];
        }
        printf("%d\n",arr3[i]);
    }
    return 0;
}