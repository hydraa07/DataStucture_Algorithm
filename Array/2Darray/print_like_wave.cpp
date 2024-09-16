// /*
//    print by arrays
// */
// #include<iostream>
// using namespace std;
// void print(int arr[][4],int row , int col){
//         for(int j=0;j<col;j++){
//             if(j%2==0){
//                 for(int i=0;i<row;i++){
//                     cout<<arr[i][j]<<" ";
//                 }
//             }
//                 else{
//                     for(int i=row-1;i>=0;i--){
//                     cout<<arr[i][j]<<" ";
//                 }
//                 }
//                 cout<<" \n";
            
//         }
// }
// int main(){
//     // int row,col;
//     // cout<<"enter the size of row and col "<<endl;
//     // cin>>row>>col;
//     // int arr[row][col];
//     int arr[4][4];
//     cout<<"enter the elements "<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//     print(arr,4,4);
//     return 0;
// }



/*
   print by vectors
*/


#include<iostream>
#include<vector>
// vector ke under vector banta hai 
using namespace std;
void displaywave(vector<vector<int>> &v, int row, int col){
    for(int j=0;j<col;j++){
        if(j%2==0){    //even numbers
             for(int i=0;i<row;i++){
            cout<<v[i][j]<<" ";
        }
    }
    else{
        
        for(int i=row-1;i>=0;++i){
                cout<<v[i][j]<<" ";
             }
    }
    cout<<endl;
  }
}

void display(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){   // vector me storage linear type se sochna hai/'
            cout<<v[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int value,n,m;
    vector<vector<int> > v;
    cout<<"enter the initial row size of vector"<<endl;
    cin>>n;
    cout<<"enter the initial col size of vector"<<endl;
    cin>>m;
    cout<<"enter the values of vector "<<endl;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
        cin>>value;
        temp.push_back(value);     // // vector me storage linear type se sochna hai/'
        }
        v.push_back(temp);           //  vector me under chhote chhote vector
    }
    display(v);
    cout<<endl<<endl;
    displaywave(v,n,m);
    return 0;
}