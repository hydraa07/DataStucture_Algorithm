#include<iostream>
using namespace std;
void count(int n){
    if(n==0){
        return ;
    }
    
    count(n-1);

    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    count(n);
    return 0;
}