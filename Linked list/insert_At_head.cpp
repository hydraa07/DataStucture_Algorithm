#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node (int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(Node* &head,int d){
    //creat new NOde
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}
int main(){
    
    // creat a new node
    Node *node1 = new Node(10);
    Node* head = node1;

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //insert at head 
    insertAthead(head,9);
    print(head);

    insertAthead(head,8);
    print(head);

    insertAthead(head,7);
    print(head);

    insertAthead(head,6);
    print(head);

    insertAthead(head,5);
    print(head);

    insertAthead(head,4);
    print(head);

    insertAthead(head,3);
    print(head);

    insertAthead(head,2);
    print(head);

    insertAthead(head,1);
    print(head);

    cout<<endl<<node1->next<<endl;

   return 0;
}