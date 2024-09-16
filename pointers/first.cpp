#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int a =2;
    int *ptr=0;
    ptr = &num;
    cout<<"the num is "<<num<<endl;
    cout<<"the pointer  is "<<ptr<<endl;
    cout<<"the pointer  is with (*) optretore "<<*ptr<<endl;
    ptr = &a;
    *ptr=*ptr+1;
    (*ptr)++;
    cout<<"the num is "<<num<<endl;
    cout<<"the pointer  is "<<ptr<<endl;
    cout<<"the pointer  is with (*) optretore "<<*ptr<<endl;

    //copy pointers 
    int *p = ptr;
    cout<<"the address of p is "<<p<<endl;
    cout<<" the address of ptr is "<<ptr<<endl;
    cout<<"the value  of p is "<<*p<<endl;
    cout<<" the value  of ptr is "<<*ptr<<endl;
    return 0;
}