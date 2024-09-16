#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node (int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    Node* node1 = new Node(20);
    Node* node2 = new Node(10);

    node1->data = 100;
    cout<<node1->data<<endl;
    node1->next = node2;
    node2->next=NULL;
    cout<<node2->data<<endl;
    cout<<node2->next<<endl;
    cout<<node1->next<<endl;
    return 0;
}