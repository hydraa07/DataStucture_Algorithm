/*
   ********************** find intersection in the only sorted arrays ;***********************
*/

#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n, int m){
    int num,index=0;
    int arr3[100];
    for(int i=0;i<n;i++){
        num = arr1[i];
        for(int j=0; j<m;j++){
            if(num == arr2[j]){
                arr3[index]=num;
                index++;
                arr2[j]=-1111;
                break;
            }
        }
    }
    
    for(int i=0;i<index;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<" the intersection number is = "<<index<<endl;
}
int main(){
    int n,m;
    cout<<"enter the first array size "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"enter the first array element "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the second array size "<<endl;
    cin>>m;
    int arr2[m];
    cout<<"enter the first array element "<<endl;
    for(int j=0; j<m;j++){
        cin>>arr2[j];
    }

    intersection(arr1,arr2,n,m);
    return 0;
}




/*
    ******************************** 2 pointer approach ***********************************************************
*/


