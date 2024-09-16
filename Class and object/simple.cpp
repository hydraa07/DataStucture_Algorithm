#include<iostream>
#include"hello.cpp"
using namespace std;
class cl{
    int age;
    int roll;
};
int main(){
    cl obj;
    hello hl;
    cout<<sizeof(obj)<<endl;
    cout<<sizeof(hl)<<endl;// kuch bhi property na hone per bhi size 1 aata hai 
    return 0;
}