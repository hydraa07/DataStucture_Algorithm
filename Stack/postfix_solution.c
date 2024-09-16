#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int stack[10];
int top = -1;
void push(int);
int pop();
float calculate(float,float,char);
float solve(char[]); 
int operand(char);
float result;


int main(){
    char postfix[15];
    printf("enter the postfix expression\n");
    scanf("%s\n",postfix);
    float ans = solve(postfix);
    printf("the answer is postfix expression = %f",ans);
    return 0;
}

float solve(char postfix[]){
    for(int i=0; postfix[i] != '\0'; i++){
        char ch = postfix[i];
        if(operand(ch)==1){
            push(ch-48);
        }
        else{
            float op2 = pop();
            float op1 = pop();
            result = calculate(op1,op2,ch);
            push(result);
        }
        result = pop();
    }
    return result;
}

int operand(char ch){
    if(ch>=48 && ch<=57){
        return 1;
    }
    return 0;
}

float calculate(float op1, float op2, char ch){
    switch (ch)
    {
        case '+': return (op1+op2);
        break;
        case '*': return (op1*op2);
        break;
        case '-': return (op2+op1);
        break;
        case '/': return (op2+op1);
        break;
        case '%': return fmod(op2,op1);
        break;
        default:
        break; 
    }
}

void push(int x){
    if(top>=5){
        printf("stack is overflow\n");
    }
    else{
        top = top+1;
        stack[top]=x;
    }
}

int pop(){
    int num;
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
    num = stack[top];
    top = top-1;
    }
    return num;
}