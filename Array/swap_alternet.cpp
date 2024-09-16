#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int j=0; j<n;j++){
        cout<<arr[j]<<" ";
    }
}
void Swap(int arr[],int n){
    cout<<"im here"<<endl;
    for(int i=0; i<n;i=i+2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);  
        }
    }
}
int main(){
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    cout<<"enter array elements "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Swap(arr,n);
    printArray(arr,n);
    return 0;
}