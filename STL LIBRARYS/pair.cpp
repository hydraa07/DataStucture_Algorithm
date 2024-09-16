#include<iostream>
// #include<pair>
using namespace std;
int main(){
    pair<string,int> p1; /// it is based on template class 
    pair<string,string> p2;
    pair<string,float> p3;

    p1 = make_pair("Ravindra",23);
    p2 = make_pair("Ravindra","Panwar");
    p3 = make_pair("c++",25.70);   
    cout<<"pair 1 is:"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<"pair 2 is:"<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"pair 3 is:"<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<p2.first;

    // cout<<" the swap funtion is:"<<endl;
    // cout<<p2.swap();
    // cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}