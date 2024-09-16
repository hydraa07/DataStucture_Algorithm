#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> q;
    cout<<"the queue is empty or not ? = "<<q.empty()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"size is queue"<<q.size()<<endl;

    cout<<"front element = "<<q.front()<<endl;
    q.pop();
    cout<<"front element = "<<q.front()<<endl;
    cout<<"last element of the list"<<q.back()<<endl;
    return 0;
}