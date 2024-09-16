/*
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

void insertAttail(Node* &tail, int d){
    // creat a new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

int main(){
    
    // creat a new node
    Node *node1 = new Node(10);
    Node* head = node1; //head points to the first node of linked list
    Node* tail = node1; //tail points to the last node of linked list

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //insert at head 
    insertAttail(tail,11);
    print(head);

    insertAttail(tail,12);
    print(head);

    insertAttail(tail,13);
    print(head);

    insertAttail(tail,14);
    print(head);

    insertAttail(tail,15);
    print(head);

    insertAttail(tail,16);
    print(head);

    insertAttail(tail,17);
    print(head);

    insertAttail(tail,18);
    print(head);

    insertAttail(tail,19);
    print(head);

    insertAttail(tail,20);
    print(head);

    // cout<<endl<<node1->next<<endl;

   return 0;
}     
 */

// *******************************         second method insertAttail     ****************************

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
int main(){
    
    // creat a new node
    Node *node1 = new Node(10);
    Node* head = node1; //head points to the first node of linked list
    Node* tail = node1; //tail points to the last node of linked list

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //insert at tail 
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

    // cout<<endl<<node1->next<<endl;

   return 0;
} 