// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// void insert_beginning(int);
// void insert_end(int);
// void insert_position(int,int);
// void display();

// struct node 
// {
//     int data;
//     struct node *next;
// } *start=NULL;
// typedef struct node NODE;

// int main(){

//     printf("****************choose your operation**********************\n");
//     printf("1. insert element at beginning\n");
//     printf("2. insert element at end\n");
//     printf("3. insert element at any position\n");
//     printf("4. display all list \n");
//     printf("5. Exit\n");
//     int n;
//     scanf("%d",&n);
//     do{
//         switch (n)
//         {
//         case 1:{
//             int x;
//             printf("enter the insert element beginning\n");
//             scanf("%d",&x);
//             insert_beginning(x);
//             break;
//             }

//         case 2:
//         {
//             int x;
//             printf("enter the insert element\n");
//             scanf("%d",&x);
//             insert_end(x);
//         }
//             break;
//         case 3:{
//             int x,y;
//             printf("enter the insert element\n");
//             scanf("%d",&x);

//             printf("enter the insert element position \n");
//             scanf("%d",&x);
//             insert_position(x,y);
//         }
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             printf("exiting......");
//             exit(0);
//             break;
//         default:
//             printf("enter the Right number\n");
//             break;
//         }
//     } while(n!=5);

//     return 0;
// }


// void insert_beginning(int a){

//     NODE *temp,*p;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data=a;
//     if(start==NULL){
//         p->next=NULL;
//     }
//     else{
//         p->next = start;
//     }
//     start = p;
// }

// void insert_end(int a){
//     NODE *p,*temp;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data = a;
//     p->next = NULL;

//     if(start==NULL){
//         start = p;
//     }
//     else{
//         temp = start;
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = p;
//     }
// }

// void insert_position(int x,int y){
//     NODE *p,*temp;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data = x;
  
//     for(int i=1; i<y;i++){
//         temp = temp->next;
//         if(start==NULL){
//             start=p;
//             p->next=NULL;
//         }
//     }
//     p->next=temp->next;
//     temp->next=p;
// }

// void display(){
//     NODE *temp;
//     temp = start;
//     while(temp!=NULL){
//         printf("DATA = %d\n",temp->data);
//         temp=temp->next;
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// #include<malloc.h>
// void insert_beginning();
// void insert_end();
// void insert_position();
// void display();

// struct node 
// {
//     int data;
//     struct node *next;
// };
// typedef struct node NODE;
// NODE *start=NULL;

// int main(){

//     printf("****************choose your operation**********************\n");
//     printf("1. insert element at beginning\n");
//     printf("2. insert element at end\n");
//     printf("3. insert element at any position\n");
//     printf("4. display all list \n");
//     printf("5. Exit\n");
//     int n;
//     scanf("%d",&n);
//     do{
//         switch (n)
//         {
//         case 1:
//             insert_beginning();
//             break;
            

//         case 2:
//             insert_end();
//             break;
//         case 3:
//             insert_position();
//             break;
//         case 4:
//             display();
//             break;
//         case 5:
//             printf("exiting......");
//             exit(0);
//             break;
//         default:
//             printf("enter the Right number\n");
//             break;
//         }
//     } while(n!=5);

//     return 0;
// }


// void insert_beginning(){
//      int a;
//      printf("enter the insert element beginning\n");
//      scanf("%d",&a);

//     NODE *temp,*p;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data=a;
//     if(start==NULL){
//         p->next=NULL;
//     }
//     else{
//         p->next = start;
//     }
//     start = p;
// }

// void insert_end(){

//     int a;
//     printf("enter the insert element end\n");
//     scanf("%d",&a);
//     NODE *p,*temp;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data = a;
//     p->next = NULL;

//     if(start==NULL){
//         start = p;
//     }
//     else{
//         temp = start;
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = p;
//     }
// }

// void insert_position(){

//     int x,y;
//     printf("enter the insert element pos.\n");
//     scanf("%d",&x);

//     printf("enter the insert element position \n");
//     scanf("%d",&x);
//     NODE *p,*temp;
//     p = (NODE*)malloc(sizeof(NODE));
//     p->data = x;
  
//     for(int i=1; i<y;i++){
//         temp = temp->next;
//         if(start==NULL){
//             start=p;
//             p->next=NULL;
//         }
//     }
//     p->next=temp->next;
//     temp->next=p;
// }

// void display(){
//     NODE *temp;
//     temp = start;
//     while(temp!=NULL){
//         printf("DATA = %d\n",temp->data);
//         temp=temp->next;
//     }
// }





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
    int a,pos;
    printf("enter the node data \n");
    scanf("%d",&a);
    printf("enter the position\n");
    scanf("%d",&pos);
    insert_position(a,pos);
    display();
    return 0;
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



void insert_position(int a , int pos){
    NODE *temp , *p;
    temp=start;
    p = (NODE*)malloc(sizeof(NODE));
    p->data=a;
    int i=1;
    while(i<pos-1){
        i++;
        temp=temp->next;
    }
    p->next=temp->next;
    temp->next=p;
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