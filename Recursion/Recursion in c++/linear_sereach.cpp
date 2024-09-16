#include<iostream>
using namespace std;
bool search(int *arr, int n,int key){
    if(n==1&&key == arr[0]){
        return 1;
    }
    if(n==1&&key != arr[0]){
        return 0;
    }
    if(key == arr[0]){
        return true;
    }
    search(arr+1,n-1,key);
}
int main(){
    int arr[10]={6,5,8,9,23,1,2,50,60,80};
    int key;
    cout<<"ENTER THE KEY "<<endl;
    cin>>key;
    int ans = search(arr,10,key);
    if(ans){
        cout<<"element present hai"<<endl;
    }
    else{
        cout<<"element present nhi hai "<<endl;
    }
    return 0;
}