#include<iostream>
using namespace std;
void printArray(int arr[][4]){

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row=3,col=4;
    // cout<<"enter the row size"<<endl;
    // cin>>row;
    // cout<<"enter the col size"<<endl;
    // cin>>col;
    int arr[3][4];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix is :="<<endl;
    printArray(arr);
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}