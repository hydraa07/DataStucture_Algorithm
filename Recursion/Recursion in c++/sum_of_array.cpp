#include<iostream>
using namespace std;
int sum(int *arr,int n){
    // if(n==0){
    //     return 0;//////    if array does not exist in memory;
    // }       
    if(n==1){
        return arr[0];
    }
    else {
        int remain = sum(arr+1,n-1);
        return arr[0]+remain;
    }
}
int main(){
    int arr[6]={5,2,200,7,6,9};
    int ans = sum(arr,6);
    cout<<"The sum is = "<<ans<<endl;
    return 0;
}