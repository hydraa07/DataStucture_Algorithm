#include<iostream>
using namespace std;
int Power(int x,int n)
{
    if(n==0){
        return 1;
    }
    // int ans = x*Power(x,n-1);
    // return ans;
    return x*Power(x,n-1);
}
int main(){
    int num;
    cout<<" enter number "<<endl;
    cin>>num;
    int power;
    cout<<"enter power "<<endl;
    cin>>power;
    int result = Power(num,power);
    cout<<"the result is => "<<result;
    return 0;
}