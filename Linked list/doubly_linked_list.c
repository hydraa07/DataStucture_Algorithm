#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL;
void insert_at_beginning();
void insert_at_end();
void insert_at_position();
void display();

int main(){
    int n;
    do
    {
    printf("*****************enter the your choice ************\n");
    printf("1. insert at the beginning \n");
    printf("2. insert at the end \n");
    printf("3. insert at the position \n");
    printf("4. print all elements\n");
    printf("5. exit form the program \n");    
    scanf("%d",&n); 


    switch(n){
        case 1: insert_at_beginning();
                  break;
        case 2: insert_at_end();
                  break;
        case 3: insert_at_position();
                  break;
        case 4: display();
                  break; 
        case 5: exit(0);
                  break;
        default : printf("enter the correct number\n")   ;
                  break;                                
    }
    } while (n!=5);
    return 0;
}
void insert_at_beginning(){
    int a;
    printf("enter the insert element at the beginning\n");
    scanf("%d",&a);
    NODE *temp,*p;
    p = (NODE*)malloc(sizeof(NODE));
    p->data = a;
    if(start==NULL){
        p->next=NULL;
        p->prev=NULL;
        start = p;
    }
    else{
        p->next = start;
        p->prev = NULL;
        start = p;
    }
    
}

void insert_at_end(){
    int a;
    printf("enter the insert element at the end\n");
    scanf("%d",&a);
    NODE *p, *temp;
    temp = start;
    p = (NODE*)malloc(sizeof(NODE));
    p->data = a;
    if(start==NULL){
        p->next=NULL;
        p->prev=NULL;
        start = p;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->prev = temp;
        p->next = NULL;
    }
}


void insert_at_position(){
    int a,n;
    printf("enter the insert element at the position\n");
    scanf("%d",&a);
    printf("enter the position\n");
    scanf("%d",&n);
    NODE *p,*temp;
    temp = start;
    p = (NODE*)malloc(sizeof(NODE));
    p->data=a;
    if(start==NULL){
        p->next=NULL;
        p->prev=NULL;
        start = p;
    }
    else if(n==1){
        p->prev = NULL;
        p->next = start;
        start->prev=p; 
        start = p;
    }

    else{
        int i=1;
        while(i!=n-1){
            temp=temp->next;
            i++;
        }
        temp->next->prev = p;
        p->next=temp->next;
        temp->next=p;
        p->prev = temp;
    }

}

void display(){
    NODE *temp;
    temp=start;
    while(temp!=NULL){
        printf("DATA = %d\n",temp->data);
        temp=temp->next;
    }
}