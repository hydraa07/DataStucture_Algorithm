#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start;

// void insert();
// void display();
int main(){
    start = (NODE*)malloc(sizeof(NODE));
    start->data=10;
    start->next=NULL;
    printf("%d\n%d",start->data,start->next); 
    // insert();
    // display();
    return 0;
}

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

// void display(){
//     NODE *temp;
//     temp = start;
//     while(temp!=NULL){
//         printf("DATA = %d\n",temp->data);
//         temp=temp->next;
//     }
// }