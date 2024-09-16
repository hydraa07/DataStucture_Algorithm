#include<iostream>
#include<math.h>
using namespace std;
int squar_root(int n){
    int s =0;
    int e = n;
    int mid;
    
    int ans = -1;
    while(s<=e){
        mid = s + (e-s)/2;
        int squar = mid*mid;

        if(squar == n){
            ans = mid;
        }        

        else if(squar < n){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}

int main(){
    // int n;
    // cout<<"enter array size "<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"enter array elements"<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int n;
    cout<<"enter "<<endl;
    cin>>n;
    int ans = squar_root(n);
    cout<<endl;
    cout<<ans ;
    return 0;
}