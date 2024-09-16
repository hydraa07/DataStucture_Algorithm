/*
   find unique number in the array;
*/

#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[100];
    cout<<"enter the array size "<<endl;
    int n;
    cin>>n;
    int number;
    cout<<"enter the array element "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    number = unique(arr,n);
    cout<<"unique number is = "<<number;
    return 0;
}