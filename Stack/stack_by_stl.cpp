#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation stack
    stack<int> s;

    if(s.empty()){
        cout<<"the stack is empty"<<endl;
    }
    else{
        cout<<"the stack is not empty"<<endl;
    }
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    if(s.empty())
        cout<<"the stack is empty"<<endl;
    else
        cout<<"the stack is not empty"<<endl;

    cout<<"the top element is "<<s.top()<<endl;


    s.pop();
    s.pop();
    s.pop();
    cout<<"the size of the stack"<<s.size()<<endl;
    cout<<"the top element is "<<s.top()<<endl;
    
    return 0;
}