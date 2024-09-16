// #include<iostream>
// using namespace std;
// // void rowsum(int arr[][3]){
    
// //     for(int i=0;i<4;i++){
// //         int sum =0;
// //         for(int j=0;j<3;j++){
// //             sum += arr[i][j];
// //         }
// //         cout<<sum<<endl;
// //     }
// // }
// void colsum(int arr[][3]){
//     for(int i=0;i<3;i++){
//         int sum =0;
//         for(int j=0;j<3;j++){
//             sum += arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main(){
//     int arr[3][3];
//     cout<<"enter the array element"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"row sum;="<<endl;
//     rowsum(arr);
//     cout<<"col sum is :="<<endl;
//     colsum(arr);
//     return 0;
// }




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
    cout<<"print the matrix Row wish "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}