// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n,m;
//     int *ptr;
//     printf("enter the row and \n");
//     scanf("%d\n%d",&n,&m);
//     int arr[n][m];
//     ptr = &arr[0][0];

//     printf("enter the element \n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d",*ptr);
//             ptr++;
//         }
//         printf("\n");
//     }
//     return 0;
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