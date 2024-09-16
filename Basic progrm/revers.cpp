#include<iostream>
using namespace std;
int main(){
    int n,num=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        if(num < INT64_MAX || num > INT64_MIN){ 
            return 0;  // yaha interger value se bhar number huye to return kar dena exicute nhi karega
        }
        int a = n%10;
        num = num*10 + a;
        n = n/10;
    }
    cout<<"the number is "<<num;
    return 0;
}