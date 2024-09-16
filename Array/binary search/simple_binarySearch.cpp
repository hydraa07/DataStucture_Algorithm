#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int mid,start=0,end=n-1; 

    while(start<=end){

        // mid = (start+end)/2; // not perfect;
        // mid = (start/2)+(end/2); 
        mid = start + (end-start)/2;

        /// upper vali chhij kamal hai esase integer ki range ke hone vale nuksan se bach jayenge

        if(arr[mid] == key){
            return mid;
        }

        else if (key<arr[mid]){
            end = mid-1;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
         
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the search key"<<endl;
    cin>>key;
    int ans = binarySearch(arr,n,key);
    cout<<ans<<endl;
    return 0;
}