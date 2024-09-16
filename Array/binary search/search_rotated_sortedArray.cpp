#include<iostream>
using namespace std;
// int search(int arr[],int n,int key){
//     int s=0;
//     int e = n-1;
//     int mid;
//     int ans=-1;
//     while(s<=e){
//         mid = s+(e-s)/2;
//         if(arr[mid]==key){
//             ans = mid;
//         }
//        else if(key>arr[0]){
//              if(arr[mid]>key){
//                  s = mid;
//              }
//              else{
//                 e = mid-1;
//              }
//         }
//         else if(key<arr[n-1]){
//             if(arr[mid]>key){
//                 e=mid;
//             }
//             else{
//                 s=mid+1;
//             }
//         }
//     }
//     return ans;
// }

int pivot(int arr[],int n){
    int s=0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s = mid+1;
        }
        else if(arr[mid]<=arr[n-1]){
            e=mid;
        }
    }
    cout<<"the element is => "<<arr[e]<<endl;
    return e;
}
int binarySearch(int arr[], int s, int e, int key, int n){
    int ans;
    int mid;
    while(s<e){
        mid = s+(e-s)/2;
        if(key==arr[mid]){
            return ans;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
    }
    return -1;
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
    int key;
    cout<<"enter the key "<<endl;
    cin>>key;
    int a = pivot(arr,n);
    int index;
    cout<<"pivot element index is  => "<<a<<endl;
    if(key > arr[a] && key < arr[n-1]){
        index = binarySearch(arr,a,n-1,key,n);
    }
    else if(key > arr[0] && key < arr[a-1]){
        index = binarySearch(arr,0,a-1,key,n);
    }
    cout<<"the search element is => "<<index<<endl;
    return 0;
}