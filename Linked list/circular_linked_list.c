#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL;
// NODE *last = NULL;
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
    temp = start;
    if(start==NULL){
        start = p;
        p->next = p;
    }
    else{
        p = start->next;
        start = p;
        while(p->next!=start){
            temp = temp->next;
        }
        temp->next = start;
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
        start = p;
        p->next = p;
    }
    else{
         while(temp->next!=start){
            temp = temp->next;
         }
         temp->next = p;
         p->next = start;
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
        start = p;
        p->next = p;
    }
    else{
        int i=1;
        while(i!=n-1){
            temp=temp->next;
            i++;
        }
        p->next = temp->next;
        temp->next = p;
    }

}

void display(){
    NODE *temp;
    temp=start;
    do{
        printf("DATA = %d\n",temp->data);
        temp=temp->next;
    }while(temp!=start);
}

void deletion_at_beginning(){
    NODE *temp,*p;
    temp=start;
    p = start;
    if(start==NULL){
        printf("list is empty\n");
    }
    else{
        start = temp->next;
        while(temp->next!=start){
            temp = temp->next;
        }
        temp->next = start;
        // free(p);
    }
}

void deletion_at_end(){
    NODE *temp,*p;
    temp=start;
    p = start;
    if(start==NULL){
        printf("list is empty\n");
    }
    else{
        while(temp->next->next!=start){
            temp = temp->next;
        }
        temp->next = start;
        // free(temp->next);
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

    else{
        
        int i=1;
        while(i!=n-1){
            temp=temp->next;
            i++;
        }
        temp->next = start;
        // free(temp->next);
    }
}