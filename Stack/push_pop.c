#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
int pop();
void traverse();
int top =-1;
int stack[5];
int main(){
    int choice;
    int item,n;
    int del;
    do{

        printf("enter the your size\n");
        printf("1. POSH\n");
        printf("2. pop\n");
        printf("3. TReVERS\n");
        printf("4. EXIT;");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            del = pop();
            printf("delete element is = %d\n",del);
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
        printf("enter the wrong number\n please reenter \n");
            break;
        }
        
    }
    while (n!=4);
   return 0;
}

void push(){
    int a;
    printf("enter the insert elements \n");
    scanf("%d",&a);
    if(top == 4){
        printf("stack is overflow\n");
    }
    top = top+1;
    stack[top]=a;
}

int pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    int num;
    num = stack[top];
    top = top-1;
    return num;
}

void traverse(){
    if(top==-1){
        printf("stack is empty\n");
    }
    for(int i=top; i>=0; i--){
        printf("%d\n",stack[i]);
    }
}















// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<math.h>
// int stack[10];
// int top = -1;
// void push(int);
// int pop();
// float calculate(float,float,char);
// float solve(); 
// int operand(char);
// int mai(){
//     char postfix[30];
//     printf("enter the postfix expression\n");
//     scanf("%s\n",postfix);
//     float ans = solve(postfix);
//     printf("the answer is postfix expression = %f",ans);
//     return 0;
// }

// float solve(char postfix[]){
//     float result;
//     for(int i=0; postfix[i]!=0; i++){
//         char ch = postfix[i];
//         if(operand(ch)==1){
//             push(ch-48);
//         }
//         else{
//             float op2 = pop();
//             float op1 = pop();
//             result = calculate(op1,op2,ch);
//             push(result);
//         }
//         result = pop();
//     }
//     return result;
// }

// int operand(char ch){
//     if(ch>=48 && ch<=57){
//         return 1;
//     }
//     return 0;
// }

// float calculate(float op1, float op2, char ch){
//     switch (ch)
//     {
//         case '+': return (op1+op2);
//         break;
//         case '*': return (op1*op2);
//         break;
//         case '-': return (op2+op1);
//         break;
//         case '/': return (op2+op1);
//         break;
//         case '%': return fmod(op2,op1);
//         break;
//         default:
//         break; 
//     }
// }

// void push(int x){
//     if(top<=5){
//         printf("stack is overflow\n");
//     }
//     else{
//         top = top+1;
//         stack[top]=x;
//     }
// }

// int pop(){
//     if(top==-1){
//         printf("stack is underflow\n");
//     }
//     int num;
//     num = stack[top];
//     top = top-1;
//     return num;
// }