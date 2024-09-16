#include<iostream>
using namespace std;
void printmatrix(int arr[][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printround(int arr[][5],int row,int col){
    int count =0;
    int total = row*col;
    int startrow = 0;
    int startcol = 0;
    int endrow = row-1;
    int endcol = col-1;
    while(count < total){
        for(int i=startcol; i<=endcol; i++){
            cout<<arr[startrow][i]<<", ";
            count++;
        }
        startrow++;
        // print last col
        for(int j=startrow; j<=endrow; j++){
            cout<<arr[j][endcol]<<", ";
            count++;
        }
        endcol--;
        // last row
        for(int k=endcol; k>=startcol; k--){
            cout<<arr[endrow][k]<<", ";
            count++;
        }
        endrow--;
        for(int a=endrow; a>=startrow; a--){
            cout<<arr[a][startcol]<<", ";
            count++;
        }
        startcol++;
    }
}
int main(){
    // int row,col;
    cout<<"enter the elements"<<endl;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    printmatrix(arr,5,5);
    cout<<endl<<endl;
    printround(arr,5,5);
    return 0;
}











// #include<iostream>
// #include<vector>
// // vector ke under vector banta hai 
// using namespace std;


// void printround(vector<vector<int>> &v, int row, int col){
//     int count =0;
//     int total = row*col;
//     int startrow = 0;
//     int startcol = 0;
//     int endrow = row-1;
//     int endcol = col-1;
//     while(count<total){
//         // print first row
//         for(int i=startcol; i<endcol; i++){
//             cout<<v[startrow][i]<<" ";
//             startrow++;
//             count++;
//         }
//         // print last col
//         for(int j=startrow; j<endrow; j++){
//             cout<<v[j][endcol];
//             count++;
//             endcol--;
//         }
//         for(int k=endcol; k>=startcol; k--){
//             cout<<v[endrow][k];
//             count++;
//             endrow--;
//         }
//         for(int a=endrow; a>=startrow; a++){
//             cout<<v[a][startcol];
//             count++;
//             startcol++;
//         }
//     }

// }


// void display(vector<vector<int>> &v){
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j]<<",";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }
// int main(){
//     int value,n,m;
//     vector<vector<int> > v;
//     cout<<"enter the initial row size of vector"<<endl;
//     cin>>n;
//     cout<<"enter the initial col size of vector"<<endl;
//     cin>>m;
//     cout<<"enter the values of vector "<<endl;
//     for(int i=0;i<n;i++){
//         vector<int> temp;
//         for(int j=0;j<m;j++){
//         cin>>value;
//         temp.push_back(value);
//         }
//         v.push_back(temp);
//     }
//     display(v);
//     cout<<endl<<endl;
//     printround(v,n,m);
//     return 0;
// }