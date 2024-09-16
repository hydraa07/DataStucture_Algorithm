#include<iostream>
using namespace std;
void largestrowsum(int arr[][3]){
    int max = -999;
    for(int i=0;i<4;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
        if(sum>max){
            max = sum;
        }
    }
    cout<<max<<endl;
}
int main(){
    int arr[4][3];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"row sum;="<<endl;
    largestrowsum(arr);
    return 0;
}