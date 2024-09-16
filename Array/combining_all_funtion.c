#include<stdio.h>
#include<conio.h>
void insert(){
    int n,a,num;
    int pos;
    printf("enter the array  size \n");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the  element of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nWhere insert element \n");
    printf("1. at the end\n");
    printf("2. in between the array \n");
    scanf("%d",&a);
    printf("\n enter the insert element \n");
    scanf("%d",&num);
    
    if(a==1){
        arr[n]=num;
        for(int i=0;i<=n;i++){
            printf("\nnew array is =\n");
            printf("%d\t",arr[i]);
        }
    }
    else{
        printf("enter the position\n");
        scanf("%d",&pos);
        pos--;
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
    }
    printf("\n");

}



void deletion(){
     int n,pos,a;
    printf("enter length of array\n");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("enter the element of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nWhere deletion element \n");
    printf("1. at the end\n");
    printf("2. from between the array \n");
    scanf("%d",&a);
    if(a==1){
        printf("deletion array form at the end\n");
        for(int i=0;i<n-1;i++){
            printf("%d\t",arr[i]);
        }
    }
    else{
    printf("\nenter the delete position\n");
    scanf("%d",&pos);
    pos--;
    printf("The new array is =\n");
    for(int i=0;i<n-1;i++){
        if(pos<=i){
            arr[i]=arr[i+1];
        }
        printf("%d\t",arr[i]);
    }
    }
    printf("\n");
}



void marge(){
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
        printf("%d\t",arr3[i]);
    }
    printf("\n");
}
int main(){
    int n;
    do{
        printf("*******************select your choice*********** \n");
        printf("1. insertion\n");
        printf("2. deletion\n");
        printf("3. marge\n");
        printf("Exit\n");
        printf("enter your number\n");
        scanf("%d",&n);

        switch(n){
            
            case 1:
            insert();
            break;

            case 2:
            deletion();
            break;

            case 3:
            marge();
            break;

            case 4:
            printf("you are exit the program");
            break;

            default:
            printf("you entered wrong number\n");
            break;
        }
    }
    while(n!=4);
    return 0;
}