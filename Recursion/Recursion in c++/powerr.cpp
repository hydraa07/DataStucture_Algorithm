#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);

    if(b%2==0){  // b even ho to  b/2  *  b/2   
        return ans*ans;
    }
    else{  //  b odd hai to a* b/2  *  b/2
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cout<<"enter the a and b"<<endl;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<"the ans is "<<ans<<endl;
    return 0;
}