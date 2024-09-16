#include<iostream>
#include<vector>
using namespace std;
void printmatrix(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void spiral_to_matrix(int arr[],int n, int row,int col){
    int count = n-1;
    int  total = 0;
    int startrow = 0;
    int startcol = 0;
    int endrow = row-1;
    int endcol = col-1;
    int arr1[4][4];
    while(count >= total){
        for(int i=startcol; i<=endcol; i++){
            arr1[startrow][i] = arr[total];
            count--;
            total++;
        }
        startrow++;
        // print last col
        for(int j=startrow; j<=endrow; j++){
            arr1[j][endcol] = arr[total];
            count--;
            total++;
        }
        
        endcol--;
        // last row
        for(int k=endcol; k>=startcol; k--){
            arr1[endrow][k] = arr[total];
            count--;
            total++;
        }
        
        endrow--;
        for(int a=endrow; a>=startrow; a--){
            arr1[a][startcol] = arr[total];
            count--;
            total++;
        }
        
        startcol++;
    }

    printmatrix(arr1,row ,col);
}
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int a[n];
    // cout<<"enter element array"<<endl;
    cout<<" enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int r,c;
    cout<<"matrix kitne * kitne ka chahiye"<<endl;
    cin>>r>>c;
    spiral_to_matrix(a,n,r,c);

    
    
    return 0;

}