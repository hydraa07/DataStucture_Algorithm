#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans;
     cout<<n<<"*"<<n-1;
     cout<<endl;
    ans = n*factorial(n-1);
    
    return ans;
}
int main(){
    int n;
    cout<<"enter the factorial element "<<endl;
    cin>>n;
    cout<<"Factorial is = "<<factorial(n);
}