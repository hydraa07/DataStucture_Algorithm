#include<iostream>
using namespace std;
                        // space complexity is = O(1)
                        // time complexity is  = O(n^2) 
                        // best case is and worst case is both are same O(n^2)
void selectionSort(int arr[],int n){ 
      for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex] >arr[j]){
                minindex = j; // index se kam chalana padega 
            }
        }
        swap(arr[i],arr[minindex]);
      }
      cout<<"the sorted array is "<<endl;
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    return 0;
}