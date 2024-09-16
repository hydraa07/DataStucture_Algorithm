#include<iostream>
using namespace std;
int main(){
    char ch[10] = "Ravindra";
    cout<<ch<<endl;
    cout<<(*ch)<<endl;
    cout<<*(ch+2)<<endl;
    cout<<ch[3]<<endl;
    int *p = ch;
    // cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}