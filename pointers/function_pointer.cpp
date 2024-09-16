#include<iostream>
using namespace std;
int fun1(int *p){
    p++;
    cout<<"in fun1 "<<p<<endl;
    cout<<"in fun1 "<<*p<<endl;
    return *p;
}

void fun2(int p){
    p++;
    cout<<"in fun2 "<<p++<<endl;
    cout<<"in fun2 "<<p<<endl;
}

void fun3(int p){
    p++;
    cout<<"in fun3 "<<p<<endl;
    cout<<"in fun3 "<<p<<endl;
}

int main(){
    int a=8;
    int *p = 0;
    p=&a;
    cout<<"befor a and *p "<<a<<endl;
    cout<<p<<endl<<*p<<endl;
   int b = fun1(p);
    fun2(*p);
    fun3(a);

    cout<<"after "<<a<<endl<<p<<endl<<*p<<endl;
    cout<<b;
    return 0;
}