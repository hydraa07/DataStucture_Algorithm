#include<iostream>
using namespace std;
bool binarysearch(int *arr, int s, int e, int key){
    int mid = s+(e-s)/2;
    //base case
    if(s>e){
        return false;
    }
    
    else if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        return binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[10]={1,3,5,6,7,8,9,10,22,30};
    int key;
    int s=0;
    int e=10;
    cout<<"enter the key"<<endl;
    cin>>key;
    int ans = binarysearch(arr,s,e,key);
    if(ans){
        cout<<"key present hai "<<endl;
    }
    else{
        cout<<"key present nhi hai"<<endl;
    }
    return 0;
}