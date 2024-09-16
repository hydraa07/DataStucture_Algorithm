// 1 or 2 steps clime at a time 
#include<iostream>
using namespace std;
int step(int n){
    if(n<0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return step(n-1)+step(n-2);
}
int main(){
    int num;
    cout<<"enter the number of steps"<<endl;
    cin>>num;
    int ans = step(num);
    cout<<ans<<endl;
    return 0;
}