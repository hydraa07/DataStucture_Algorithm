// #include<stdlib.h>
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     float avg,sum=0;
//     printf("enter the number of table\n");
//     scanf("%d",&n);
//     for(int i=0;i<10;i++){
//         printf("%d * %d = %d\n",i+1,n,(i+1)*n);
//         sum +=(i+1)*n;
//         avg = (sum/10);
//     }
//     printf("\n\n");
//     printf("the sum of table is = %d\n",sum);
//     printf("the avg of table is = %f\n",avg);
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int arr[n];
    printf("enter the length of array \n");
    scanf("%d",&n);
    printf("enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("array elements = %d\t",arr[i]);
    }
    return 0;
}