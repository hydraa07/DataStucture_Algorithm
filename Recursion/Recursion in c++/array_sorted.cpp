#include<iostream>
using namespace std;
int sort(int *arr,int n){
    if(n==0||n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return sort(arr+1,n-1);
    }
}
int main(){
    int arr[9]={1,2,3,4,5,2,8,9,10};
    int ans = sort(arr,10);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}