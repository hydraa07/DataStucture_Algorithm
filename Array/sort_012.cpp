#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void search(int arr[], int n)
    {
        // code here 
        int i=0;
        int j=n-1;
        
        cout<<"loop 1"<<endl;
        while(i<=j){
            
            if(arr[i]==0){
                i++;
            }
            
            
            else if(arr[j]!=0){
                j--;
            }
            
            
            else if(arr[i]!=0 && arr[j]==0){
                
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            
        }

         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        
        i=0;
        j=n-1;
        
        cout<<"loop 2"<<endl;
         while(i<j){
              
            if(arr[i]==1){
                i++;
            }
             
            else if(arr[j]==2){
                j--;
            }

            else if(arr[i] == 2 && arr[j] == 1){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            
        }
        cout<<"loop 3"<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
int main() {
    int n;
    cout<<"enter the data"<<endl;
    cin>>n;
  int data[n];
  for(int i=0;i<n;i++){
    cin>>data[i];
  }
  search(data ,n);
  return 0;
}

