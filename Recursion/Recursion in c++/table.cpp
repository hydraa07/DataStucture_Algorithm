#include<iostream>
using namespace std;
void table(int num,int n){
    if(n==0){
        return ;
    }
    int ans = num * n;
    table(num,n-1);
    cout<<n<<"*"<<num<<" = "<<ans<<endl;
}
int main(){
    int number;
    cout<<"enter the number "<<endl;
    cin>>number;
    int num;
    cout<<" enter the table "<<endl;
    cin>>num;
    table(num ,number);
    return 0;
}