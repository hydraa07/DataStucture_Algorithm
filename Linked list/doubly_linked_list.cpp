#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node (int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int get_length(Node* head){
    Node* temp = head;
    int count=0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_At_head(Node* &head, int data){
    Node* p = new Node(data);
    head->prev = p;
    p->next = head;
    head = p;
    
}

void insert_At_tail(Node* &tail ,int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;

}

void insert_At_position(Node* &head,Node* tail, int position , int data){
    // insert at head
    if(position == 1){
        insert_At_head(head,data);
    }
    Node* temp = head;
    int count=1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insert_At_tail(tail,data);
    }

    Node* p = new Node(data);
    p->next = temp->next;
    temp->next->prev = p;
    temp->next = p;
    p->prev = temp;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<get_length(head)<<endl;
    insert_At_head(head , 11);
    print(head);
    cout<<get_length(head)<<endl;

    insert_At_head(head , 12);
    insert_At_head(head , 13);
    insert_At_head(head , 14);
    print(head);
    cout<<get_length(head)<<endl;


    insert_At_tail(tail, 9);
    insert_At_tail(tail, 8);
    insert_At_tail(tail, 7);
    insert_At_tail(tail, 6);
    insert_At_tail(tail, 5);
    insert_At_tail(tail, 4);
    insert_At_tail(tail, 3);
    insert_At_tail(tail, 2);
    insert_At_tail(tail, 1);
    print(head);

    cout<<get_length(head)<<endl;

    insert_At_position(head,tail,5,555);
    print(head);
    cout<<get_length(head)<<endl;


    return 0;
}