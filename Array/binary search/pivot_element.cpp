/*
    find the pivot element in the  sorted rotated array;
*/

#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s = mid+1;
        }
        else if(arr[mid]<=arr[n-1]){
            e=mid;
        }
    } 
    // return arr[e];
    return s;
}
int main(){
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = pivot(arr,n);
    cout<<"the pivot element is => "<<ans<<endl;
    return 0;
}