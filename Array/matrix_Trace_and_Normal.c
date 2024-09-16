#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,sum=0;
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
        printf("*******Trace of the matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum = sum + arr[i][j];
            }
        }
    }
    printf("\n The Trace is = %d\n",sum);

    printf("The normal of the matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            num = num + ((arr[i][j])*(arr[i][j]));
        }
    }
    number = sqrt(num);
    printf("the normal is = %f",number);
    return 0;
}