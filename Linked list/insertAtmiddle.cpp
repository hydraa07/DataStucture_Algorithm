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


void insertAttail(Node* &head, int d){
    // creat a new node
    Node *p = new Node(d);
    Node*temp;
    temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = p; 
}



void insertAtmiddle(Node* &head ,int position, int d){
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }
    //creat new NOde
    Node* p = new Node(d);
    p->next = temp->next;
    temp->next = p;
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

    //insert at tail. 
    insertAttail(head,11);
    print(head);

    insertAttail(head,12);
    print(head);

    insertAttail(head,13);
    print(head);

    insertAttail(head,14);
    print(head);

    insertAttail(head,15);
    print(head);

    insertAttail(head,16);
    print(head);

    insertAttail(head,17);
    print(head);

    insertAttail(head,18);
    print(head);

    insertAttail(head,19);
    print(head);

    insertAttail(head,20);
    print(head);

    // insert at middle
    insertAtmiddle(head,4,4);
    print(head);


   return 0;
}