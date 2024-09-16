/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        for(int k=0; k<=i*2; k++){
            if(k==0||k==1||k==2){
                continue;
            }
            cout<<"*"<<" ";
        }
        for(int a=n-i+1; a>=1; a--){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}