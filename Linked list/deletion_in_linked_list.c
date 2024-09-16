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
void deletion_at_beginning();
void deletion_at_end();
void deletion_at_position();
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
    printf("5. deletion at thee beginning\n");
    printf("6. deletion at the end \n");
    printf("7. deletion at any position\n");
    printf("8. exit form the program \n");    
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
        case 5: deletion_at_beginning();
                  break;
        case 6: deletion_at_end();
                  break;
        case 7: deletion_at_position();
                  break; 
        case 8: exit(0);
                  break;
        default : printf("enter the correct number\n")   ;
                  break;                                
    }
    } while (n!=8);
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


void deletion_at_beginning(){
    NODE *temp,*p;
    temp=start;
    if(start==NULL){
        printf("list is empty\n");
    }
    else if(start->next==NULL){
        free(temp);
        printf("now list is empty \n");
        // start = NULL;
    }
    else{
        start = temp->next;
        temp->prev=NULL;
        temp->next->prev = NULL;
        free(temp);
    }
}

void deletion_at_end(){
    NODE *temp,*p;
    temp=start;
    if(start==NULL){
        printf("list is empty\n");
    }
    else if(start->next==NULL){
        free(temp);
    }
    else{
        while(temp->next!=NULL){
            temp->prev->next=NULL;
            free(temp);
        }
    }
}

void deletion_at_position(){
    NODE *temp,*p;
    temp=start;
    int n;
    printf("enter the position of the deletion node\n");
    scanf("%d",&n);
    if(start==NULL){
        printf("list is empty\n");
    }

    else if(n==1){
        if(temp->next==NULL){
            free(temp);
        }
        else{
            start = temp->next;
            start->prev=NULL;
            free(temp);
        }
    }
    else{
        
        int i=1;
        while(i!=n){
            temp=temp->next;
            i++;
        }
         temp->prev->next = temp->next;
         temp->next->prev = temp->prev;
         free(temp);
    }
}