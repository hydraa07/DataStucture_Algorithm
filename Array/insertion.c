// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     printf("enter the length of array \n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the array's element \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("array element is:=");
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n\n");
//     printf("enter the insert element");
//     int a;
//     scanf("%d",&a);
//     arr[n]=a;
//     printf("\n\n");
//     for(int i=0;i<=n;i++){
//         printf("%d\t",arr[i]);
//     }    
//     return 0;
// }



#include<stdio.h>
#include<conio.h>
int main(){
    int n,num,pos;
    printf("enter the length of array'\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of the array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("this is the array\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n\n");
    printf("enter the position of new element\n");
    scanf("%d",&pos);
    pos--;
    printf("\n\n");
    printf("enter the new element \n");
    scanf("%d",&num);
    for(int i=n;i>=pos;i--){
        if(pos<=i){
            arr[i+1]=arr[i];
        }
    }
    arr[pos]=num;
    printf("\nnew array is =\n");
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}