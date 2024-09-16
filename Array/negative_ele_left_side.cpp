#include<iostream>
#include<stdlib.h>
using namespace std;


void sort_negative(int *arr, int n){
    int first = 0;
    int last = n-1;

    while (first < last)
    {
       if(arr[first] > 0 && arr[last] <= 0 ){
        swap(arr[first] , arr[last]);
        first ++;
        last--;
       }  
       else if(arr[first] < 0){
        first++;
       }
       else if (arr[last] > 0){
        last--;
       }
    }
    cout<<" sort array is = ";

   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"enter the size of arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort_negative(arr,n);
//      int first = 0;
//     int last = n-1;

//     while (first < last)
//     {
//        if(first > 0 && last <= 0 ){
//         swap(arr[first] , arr[last]);
//         first ++;
//         last--;
//        }  
//        else if(first < 0){
//         first++;
//        }
//        else if (last > 0){
//         last--;
//        }
//     }
//     cout<<" sort array is = ";

//    for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

    sort(arr.begin(), arr.length()-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}