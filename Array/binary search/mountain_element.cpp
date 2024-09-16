/*
   find the mountain element in an array ;
*/

#include<iostream>
using namespace std;

 int mountainElement(int arr[], int n){
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid=-1;
    while(s<e){
        mid = s + (e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e = mid;
        }
    }
    return arr[s];
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
    int ans = mountainElement(arr,n);
    cout<<"the mountain element in array is -> "<<ans;
    return 0;
}