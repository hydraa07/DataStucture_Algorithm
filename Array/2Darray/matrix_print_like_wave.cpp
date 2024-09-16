#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the size of row and col "<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cin>>arr[i][j];
        }
    }
    cout<<"print the matrix Row wish "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"print the matrix col wish "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<"row wish sum is "<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
           sum += arr[i][j];
        }
        cout<<i+1<<"sum row = "<<sum<<endl;
    }
cout<<"\n\n\n";
    cout<<"col wish sum is "<<endl;
    for(int i=0;i<col;i++){
        int sum =0;
        for(int j=0;j<row;j++){
            sum+=arr[i][j];
        }
        cout<<i+1<<"col sum is = ";
        cout<<sum<<endl;
    }
    return 0;
}