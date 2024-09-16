#include<iostream>
using namespace std;
int linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"the index id = "<<i<<endl;
            return 1;
        }
    }
    return 0;
}
int main(){
    int n,key;  
    cout<<"enter the array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key "<<endl;
    cin>>key;
    bool found = linearSearch(arr,n,key);
    if(found){
        cout<<"element is present in array "<<endl;
    }
    else{
        cout<<"element not present in array "<<endl;
    }
    return 0;
}