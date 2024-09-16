#include<stdio.h>
#include<conio.h>
#include<math.h>
char stack[10];
int top = -1;
void push(char);
char pop();
void solve(char[]);
int operand(char);
int priority(char);
int main(){
    char infix[20];
    printf("enter the infix string\n");
    scanf("%s",infix);
    solve(infix);
    return 0;
}

void solve(char infix[]){
    char ch;
    int top1;
    char postfix[20];
    int j=0;
    for(int i=0; infix[i]!='\0';i++){
        ch = infix[i];
        if(operand(ch)==1){
            postfix[j]=ch;
            j++;
        }   
        else{
            if(top==-1||ch=='('){
                push(ch);
            }
            
            else{
                char ch2 = pop();
                if(priority(ch)>priority(ch2)){
                    push(ch2);
                    push(ch);
                }
                else if(ch2=='('){
                    push(ch);
                    top1 =top;
                }
                else if(ch==')'){
                    while(top!=top1){
                        postfix[j]=pop();
                        j++;
                    }
                }
                else{
                    postfix[j]=ch2;
                    j++;
                    while(top!=-1){
                        postfix[j]=pop();
                        j++;
                    }
                    push(ch);
                }

            }
        }
    }
    while(top!=-1){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
     printf("%s",postfix);
    // j++;
    // for(int i=0;postfix[i]='\0';i++){
    // }
}


void push(char x){
    if(top>=5){
        printf("stack is overflow\n");
    }
    else{
        top = top+1;
        stack[top]=x;
    }
}

char pop(){
    char ch;
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
    ch = stack[top];
    top = top-1;
    }
    return ch;
}


int operand(char ch){
    if(ch>='0'&&ch<='9'||ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        return 1;
    }
    else{
        return 0;
    }
}

int priority(char ch){
    if(ch=='*'||ch=='/'){
        return 1;
    }
    else{
        return 0;
    }
}
