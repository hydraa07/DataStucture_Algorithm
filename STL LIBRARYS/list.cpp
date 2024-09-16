/*  it is a sequential access stl  */
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1{10,20,30,40,50,60,70,80,90};
    list<int> l2{66,88,99,22,11,33,77};
    list<int>::iterator p = l1.begin();
    
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    cout<<"size of list is "<<l1.size()<<endl;
    cout<<"size of second list is = "<<l2.size()<<endl;
    l2.push_back(500);
    l1.push_back(99);
    l1.push_front(666);
    cout<<"list after the push element is :"<<endl;
    l1.sort();
    l1.clear();
    list<int>::iterator r = l1.begin();
    while(r!=l1.end()){
        cout<<*r<<",";
        r++;
    }
    cout<<endl;
    l2.reverse();
    l2.remove(500);
    list<int>::iterator q = l2.begin();
    cout<<"second list  after push function "<<endl;
    while(q!=l2.end()){
        cout<<*q<<", ";
        q++;
    }


    return 0;
}