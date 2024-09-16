// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int *ptr;
//     int x=2;
//     ptr = &x;
//     printf("%d\n",*ptr);
//     printf("%d\n",x);
//     (*ptr)+=1;
//     printf("%d\n",*ptr);
//     printf("%d\n",x);
//     (*ptr)++;
//     printf("%d\n",*ptr);
//     printf("%d\n",x);
//     return 0;
// }


#include<stdio.h>
#include<conio.h>
int main(){
    int *ptr;
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of array\n");
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n; i++){
        printf("%d\t",arr[i]);
        ptr++;
    }

    return 0;
}