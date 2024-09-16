#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top1;
    int top2;

    public:

    Stack(int s){
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    void push1(int element){
        if(top2-top1 > 1){
            top1++;
            arr[top1]  = element;
        }
        else{
            cout<<"stack is over flow"<<endl;
        }
    }

    void push2(int element){
        if(top2-top1 > 1){
            top2--;
            arr[top2]  = element;
        }
        else{
            cout<<"stack is over flow"<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            return ans;
        }
        else{
            return -1;
        }

    }

    int pop2(){
        if(top2<=size){
            int ans = arr[top2];
            return ans;
        }
        else{
            return -1;
        }

    }
};

int main(){
    Stack st(10);
    st.push1(20);
    st.push1(30);
    st.push2(40);
    st.push1(50);
    st.push2(60);
    st.push1(70);

    cout<<st.pop2()<<endl;
    cout<<st.pop1()<<endl;
    st.push1(1000);
    cout<<st.pop1()<<endl;
    return 0;
}