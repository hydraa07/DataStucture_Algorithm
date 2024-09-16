#include<iostream>
#include<vector> 
using namespace std;
void printmatrix(int arr[][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int search(int arr[][5],int row,int col,int key){
    int rowindex = 0;
    int colindex = col-1;
    // int s=0;
    // int e= (row*col)-1;
    
    while(rowindex < row && colindex >=0){

        int target = arr[rowindex][colindex];
        
        if(target==key){
            cout<<rowindex<<","<<colindex<<endl;
            return 1;
        }
        else if(target<key){
            rowindex++;
        }
        else{
            colindex--;
        }
        
    }
    return 0;
}
int main(){
    cout<<"enter the elements"<<endl;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    printmatrix(arr,5,5);
    cout<<endl<<endl;
    bool a; 
    a = search(arr,5,5,key);
    if(a==1){
        cout<<"key is present "<<endl;
    }
    else if(a==0){
        cout<<"key is not present "<<endl;
    }
    return 0;
}