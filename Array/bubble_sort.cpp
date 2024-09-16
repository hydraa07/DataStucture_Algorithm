#include<iostream>
using namespace std;
/* It also solve the round wish

  time complexity is O(n^2)

    best case time com. is O(n)
    worst case time com. is O(n^2)
*/ 

void bubbleSort(int arr[],int n){
    for(int i=1; i<n;i++){
 
        bool swapped = false;       
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
      }
      if(swapped == false ){ // best case me yah hoga 
        break;
      }
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
    bubbleSort(arr,n);
    return 0;
}