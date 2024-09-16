#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
NODE * start2 =NULL;
NODE * start =NULL;

void create(int);
void create2(int);
void marge();
void display();
void display2();
void display_marge();

int main(){
    int n,m;
    printf("enter the length of the first list\n");
    scanf("%d",&n);
    create(n);
    display();
    printf("**********second list ********\n\n");
    printf("second linked length\n");
    scanf("%d",&m);
    create(m);
    // display();
    display2();
    marge();
    printf("\n\n");
    display_marge();
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

        // start = (NODE*)malloc(sizeof(NODE));
        // start->data = x;
        // start->next = NULL;
        // temp = start;
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
    temp->next=NULL;
}



void create2(int n){
     NODE *temp2;
     int x;
        printf("enter the data of the node 1\n");
        scanf("%d",&x);
        start2 = (NODE*)malloc(sizeof(NODE));
        start2->data = x;
        start2->next = NULL;
        temp2 = start2;

    if(start2==NULL){
        printf("list is empty\n");
        return;
    }
    
        // printf("enter the data of the node  1 \n");
        // scanf("%d",&x);

        // start2 = (NODE*)malloc(sizeof(NODE));
        // start2->data = x;
        // start2->next = NULL;
        // temp2= start2;
        for(int i=2;i<=n;i++){
            NODE  *p =NULL;
            p = (NODE*)malloc(sizeof(NODE));
            printf("enter the data of the node %d\n",i);
            scanf("%d",&x);
                p->data=x;
                p->next=NULL;
                temp2->next = p;
                temp2=temp2->next;
                // printf("%d",i ,"node  hua");
        
    }
    temp2->next=NULL;
}


void display(){
    NODE *temp;
    temp = start;
    while(temp!=NULL){
        printf("DATA = %d\n",temp->data);
        temp=temp->next;
    }
}

void display2(){
    NODE *temp;
    temp = start;
    while(temp!=NULL){
        printf("DATA = %d\n",temp->data);
        temp=temp->next;
    }
}

void marge(){
    NODE *temp,*temp2,*p;
    temp = start;
    // temp2 = start2; 
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=start2;
    start2 = NULL;
}
void display_marge(){
    NODE *p;
    p = start;
    while(p!=NULL){
        printf("DATA = %d\n",p->data);
        p=p->next;
    }
}