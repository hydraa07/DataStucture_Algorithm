#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the "<<endl;
    cin>>n;
    int l;
    cout<<"lent of left"<<endl;
    cin>>l;
    int d=1;
    int arr[n];
    int arr1[n];
    cout<<"enter the element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    while(d<=l){
        int temp =arr[n-1];
        for(int i=0; i<n; i++){
            arr1[i+1] = arr[i];
        }
        arr1[0] = temp;
        for(int i=0; i<n; i++){
        arr[i] = arr1[i];
        }
        d++;
    }
    for(int i=0; i<n; i++){
        // arr[i] = arr1[i];
        cout<<arr1[i]<<" ";
    }
}