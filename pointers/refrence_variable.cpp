#include<iostream>
using namespace std;
void fun(int &n){
    n++;
    cout<<"in fun "<<n<<endl;
}
void fun2(int n){
    n++;
    cout<<"in fun2 is "<<n<<endl;
}
int main(){
    int i =9;
    int &j=i;
    cout<<" i is "<<i<<endl;
    cout<<" j is "<<j<<endl;
    // pass by reference
    fun(i);
    cout<<"after i is "<<i<< " " << j<<endl;
    // pass by value
    fun2(i);
    cout<<" after value is "<<i<<endl;
    return 0;
}