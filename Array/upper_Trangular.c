#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,flag;
    float number,num=0;
    printf("enter the length of the row and columns\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the matrix elements\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    flag=1;  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                if(arr[i][j]!=0){
                flag=0;
                break;
                }
            }
        }
    }
    if(flag==1){
        printf("the matrix is a upper triangular\n");
    }
    else{
        printf("the matrix is not a upper triangular\n");
    }
    return 0;
}