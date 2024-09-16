#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;

void create(int);
void display();
void insert();
void insert_end();
void insert_position();

int main(){
    int n;
    printf("How many element to be insert in list\n");
    scanf("%d",&n);
    create(n);
    display();
    insert();
    display();
    insert_end();
    display();
    insert_position();
    display();
    return 0;
}


void create(int n){
     NODE *temp;
     int x;
        printf("enter the data of the node 1\n");
        scanf("%d",&x);
        start = (NODE*)malloc(sizeof(NODE));
        start->data = x;
        start->next = NULL;
        temp = start;

    if(start==NULL){
        printf("list is empty\n");
        return;
    }
    
        // printf("enter the data of the node  1 \n");
        // scanf("%d",&x);

        start = (NODE*)malloc(sizeof(NODE));
        start->data = x;
        start->next = NULL;
        temp = start;
        for(int i=2;i<=n;i++){
            NODE  *p =NULL;
            p = (NODE*)malloc(sizeof(NODE));
            printf("enter the data of the node %d\n",i);
            scanf("%d",&x);
                p->data=x;
                p->next=NULL;
                temp->next = p;
                temp=temp->next;
                // printf("%d",i ,"node  hua");
        
    }
}

void insert(){
     int a;
     printf("enter the insert element beginning\n");
     scanf("%d",&a);

    NODE *temp,*p;
    p = (NODE*)malloc(sizeof(NODE));
    p->data=a;
    if(start==NULL){
        p->next=NULL;
    }
    else{
        p->next = start;
    }
    start = p;
}


void insert_end(){

    int a;
    printf("enter the insert element end\n");
    scanf("%d",&a);
    NODE *p,*temp;
    p = (NODE*)malloc(sizeof(NODE));
    p->data = a;
    p->next = NULL;

    if(start==NULL){
        start = p;
    }
    else{
        temp = start;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}

void display(){
    NODE *temp;
    temp = start;
    while(temp!=NULL){
        printf("DATA = %d\n",temp->data);
        temp=temp->next;
    }
}



void insert_position(){

    int x,y;
    printf("enter the insert element\n");
    scanf("%d",&x);

    printf("enter the insert element position \n");
    scanf("%d",&y);
    NODE *p,*temp;
    p = (NODE*)malloc(sizeof(NODE));
    p->data = x;
    p->next=NULL;
  
    y--;
    while(y!=1){
        temp=temp->next;
        y--;
    }
    p->next=temp->next;
    temp->next=p;
    
}












// #include <stdio.h>
// #include <stdlib.h>

// /* Structure of a node */
// struct node {
//     int data;          // Data 
//     struct node *next; // Address 
// }*head;


// /* 
//  * Functions to create and display list
//  */
// void createList(int n);
// void traverseList();


// int main()
// {
//     int n;

//     printf("Enter the total number of nodes: ");
//     scanf("%d", &n);

//     createList(n);

//     printf("\nData in the list \n");
//     traverseList();

//     return 0;
// }

// /*
//  * Create a list of n nodes
//  */
// void createList(int n)
// {
//     struct node *newNode, *temp;
//     int data, i;

//     head = (struct node *)malloc(sizeof(struct node));

//     // Terminate if memory not allocated
//     if(head == NULL)
//     {
//         printf("Unable to allocate memory.");
//         exit(0);
//     }


//     // Input data of node from the user
//     printf("Enter the data of node 1: ");
//     scanf("%d", &data);

//     head->data = data; // Link data field with data
//     head->next = NULL; // Link address field to NULL


//     // Create n - 1 nodes and add to list
//     temp = head;
//     for(i=2; i<=n; i++)
//     {
//         newNode = (struct node *)malloc(sizeof(struct node));

//         /* If memory is not allocated for newNode */
//         if(newNode == NULL)
//         {
//             printf("Unable to allocate memory.");
//             break;
//         }

//         printf("Enter the data of node %d: ", i);
//         scanf("%d", &data);

//         newNode->data = data; // Link data field of newNode
//         newNode->next = NULL; // Make sure new node points to NULL 

//         temp->next = newNode; // Link previous node with newNode
//         temp = temp->next;    // Make current node as previous node
//     }
// }


// /*
//  * Display entire list
//  */
// void traverseList()
// {
//     struct node *temp;

//     // Return if list is empty 
//     if(head == NULL)
//     {
//         printf("List is empty.");
//         return;
//     }
    
//     temp = head;
//     while(temp != NULL)
//     {
//         printf("Data = %d\n", temp->data); // Print data of current node
//         temp = temp->next;                 // Move to next node}
// }
// }//111111111144444444445555552222111114440001111111111144444444447\7777777777777755555555222222200000000