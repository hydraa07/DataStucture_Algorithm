/*
    find first and last index of an element in sorted array.

    NOTE :-> 1) first  of all left most index find and in the second function find left most index.
*/

#include<iostream>
using namespace std;
int firstIndex(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid = s + (e-s)/2;
        if(key==arr[mid]){
            ans = mid; // value store karke left me or dhundho
            e = mid-1;
        }

        else if(key<arr[mid]){
            e = mid-1;
        }

        else if(key>arr[mid]){
            s=mid+1;
        }
    }
    return ans;
}




int lastIndex(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid = s + (e-s)/2;
        if(key==arr[mid]){
            ans = mid;
            s = mid+1; // value store karke right me or dhundho
        }

        else if(key<arr[mid]){
            e = mid-1;
        }

        else if(key>arr[mid]){
            s=mid+1;
        }
    }
    return ans;
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
    int key;
    cout<<"enter the search key "<<endl;
    cin>>key;
    int firstposition = firstIndex(arr,n,key);
    int lastposition = lastIndex(arr,n,key);
    cout<<"the first INDEX of an element is :=> "<<firstposition<<endl;
    cout<<"the last INDEX of an element is :=> "<<lastposition<<endl;
    return 0;
}