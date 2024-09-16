// #include<iostream>
// using namespace std;
// void printArray(int arr[],int n){ 
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void revers(int arr[],int n){
//    int start= 0;
//    int end = n-1;
//    while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//    }
// }
// int main(){
//     int n,key;
//     cout<<"enter the array size "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the array elements "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     revers(arr,n);
//     printArray(arr,n);
//     return 0;
// }



#include<iostream>
using namespace std; 
void revers(int arr[],int n){
   for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
   }
}
int main(){
    int n,key;
    cout<<"enter the array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revers(arr,n);
    return 0;
}