// #include <stdio.h>  
// #include <stdlib.h>  
// void push();  
// void pop();  
// void display();  
// struct node   
// {  
// int data;  
// struct node *next;  
// };  
// struct node *head;  
  
// void main ()  
// {  
//     int choice=0;     
//     printf("\n*********Stack operations using linked list*********\n"); 
//     while(choice != 4)  
//     {  
//         printf("\n\nChose one from the below options...\n");  
//         printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
//         printf("\n Enter your choice \n");        
//         scanf("%d",&choice);  
//         switch(choice)  
//         {  
//             case 1:  
//             {   
//                 push();  
//                 break;  
//             }  
//             case 2:  
//             {  
//                 pop();  
//                 break;  
//             }  
//             case 3:  
//             {  
//                 display();  
//                 break;  
//             }  
//             case 4:   
//             {  
//                 printf("Exiting....");  
//                 break;   
//             }  
//             default:  
//             {  
//                 printf("Please Enter valid choice ");  
//             }   
//     };  
// }  
// }  
// void push ()  
// {  
//     int data;  
//     struct node *ptr = (struct node*)malloc(sizeof(struct node));   
//     if(ptr == NULL)  
//     {  
//         printf("not able to push the element");   
//     }  
//     else   
//     {  
//         printf("Enter the value");  
//         scanf("%d",&data);  
//         if(head==NULL)  
//         {         
//             ptr->data = data;  
//             ptr -> next = NULL;  
//             head=ptr;  
//         }   
//         else   
//         {  
//             ptr->data = data;  
//             ptr->next = head;  
//             head=ptr;  
               
//         }  
//         printf("Item pushed");  
          
//     }  
// }  
  
// void pop()  
// {  
//     int item;  
//     struct node *ptr;  
//     if (head == NULL)  
//     {  
//         printf("Underflow");  
//     }  
//     else  
//     {  
//         item = head->data;  
//         ptr = head;  
//         head = head->next;  
//         free(ptr);  
//         printf("Item popped");  
          
//     }  
// }  
// void display()  
// {  
//     int i;  
//     struct node *ptr;  
//     ptr=head;  
//     if(ptr == NULL)  
//     {  
//         printf("Stack is empty\n");  
//     }  
//     else  
//     {  
//         printf("Printing Stack elements \n");  
//         while(ptr!=NULL)  
//         {  
//             printf("%d\n",ptr->data);  
//             ptr = ptr->next;  
//         }  
//     }  
// }  


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop(); 
void display();
void displytop();
struct node   
{  
int data;  
struct node *next;  //top points to NULL
};
struct node *top=0;
int main(){
     
    int n;
    do{
        printf("enter your choice\n");
        printf("1. push the element\n");
        printf("2. pop element\n");
        printf("3. top element\n");
        printf("4. display elements\n");
        printf("5. exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2: 
             pop();
            break;
        case 3:
            displytop();
            break;
        case 4:
            display();
            break;    
        case 5: 
            exit(0);
            break;
        default :
            printf("\nenter the right number\n");
            break;    
        }
    } while(n!=5);
    return 0;
}


void push(){
    int x;
    printf("enter the insert element \n");
    scanf("%d",&x);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}  

void pop(){
    struct node *x;
    x = top;
    if(top==0){
        printf("stack is underflow\n");
    }
    else{
        printf("%d\n",x->data);
        top = top->next;
        free(x);
    }
} 

void displytop(){
    if(top==0){
        printf("empty list");
    }
    else{
        
        printf("%d\n",(top->data));
    }
}

void display(){
    struct node *temp;
    temp = top;

    if(top==0){
        printf("stack is empty\n");
    }
    else{
        while(temp!=0){
            printf("%d\t",temp->data);
            temp = temp->next;
        }
    }
}