#include<iostream>
using namespace std;
int main(){
    // int *p = new int;
    // cin>>*p;
    // cout<<*p<<endl;
    int *ptr = new int[10];
    for(int i=0;i<10;i++){
        cin>>ptr[i];
        // cout<<" i is "<<i;
    }
    for(int i=0;i<10;i++){
        // cout<<*(ptr+i)<< " ";
        cout<<ptr[i];
    }
    return 0;
}