#include<iostream>
using namespace std;
int sum(int arr[] , int n){
    int sum=0;
    for(int i =0; i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[30];
    int ans;
    cout<<"enter the array size "<<endl;
    int size;
    cin>>size;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    ans = sum(arr,size);
    cout<<"the array sum  is = "<<ans;
    return 0;
}