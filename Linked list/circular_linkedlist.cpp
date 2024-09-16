#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node (int d){
        this->data = d;
        this->next = NULL;
    }
};
int main(){
    Node* head;
    Node* node = new Node(10);
    cout<<node->data<<" ";
                          
                          
    return 0;
}