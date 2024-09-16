#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    
     // constructor
    Node (int data){
        this->data = data;
        this->next = NULL;
    }
};


void insert_node(Node* head , int d){
        Node* p = new Node(d);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
}

void print(Node* head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

///////////  approch 1 ///////////  
// Node* get_middle(Node* head){
    
//     // if we have empty list ot one node in a list 
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     // if we have 2 node in the list
//     if(head->next->next == NULL){
//         return head->next;
//     }

//     // if we have long linked list 

//     Node *slow = head;
//     Node *fast = head->next;

//     while(fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast = fast->next;
//         }
//         slow = slow->next;

        
//     }

//     return slow;

// }



////////////////// approch 2 ///////////////////////
Node * get_middle(Node *head){
    int count=0;
    Node* temp = head;
    Node* temp1 = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    cout<<endl<<" length is =" <<count<<endl;
    for(int i=1; i<=count/2; i++){
        temp1 = temp1->next;
    }
    // cout<<"the middle is "<<temp1->data<<endl;
    return temp1;
} 
int main(){
    Node *node1 = new Node(10);
    Node* head=node1;
    insert_node(head,20);
    insert_node(head,30);
    insert_node(head,40);
    insert_node(head,50);
    insert_node(head,60);
    insert_node(head,70);
    insert_node(head,80);
    insert_node(head,90);
    insert_node(head,100);
    insert_node(head,110);
    insert_node(head,120);
    insert_node(head,130);
    insert_node(head,140);
    insert_node(head,150);
    insert_node(head,160);

    print(head);

    Node* ans = get_middle(head);
    cout<<"the middle element is "<<ans->data<<endl;
    
    return 0;
}