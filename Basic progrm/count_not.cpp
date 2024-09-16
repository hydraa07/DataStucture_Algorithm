#include<iostream>
using namespace std;
int main(){
    int Amount,n;
    int n1,n2,n3,n4,n5,n6,n7;
    cout<<"enter the amount "<<endl;
    cin>>Amount;
    while(Amount!=0){
         if(Amount>=2000){
             n = 1;
        }
         else if(Amount>=500){
             n = 2;
        // Amount = Amount/500;
        }
         else if(Amount>=200){
             n = 3;
        // Amount = Amount/200;
        }
         else if(Amount>=100){
             n = 4;
        // Amount = Amount/100;
        }
         else if(Amount>=50){
             n = 5;
        // Amount = Amount/50;
        }
         else if(Amount>=20){
             n = 6;
        // Amount = Amount/20;
        }
         else if(Amount>=10){
             n = 7;
        // Amount = Amount/10;
        }
    switch(n){
        case 1:{
            n1 = Amount/2000;
            cout<<"2000 no = "<<n1<<endl;
            Amount = Amount/2000;
            break;
        }
        case 2:{
            n2 = Amount/500;
            cout<<"500 no = "<<n2<<endl;
            Amount = Amount/500;
            break;
        }
        case 3:{
            n3 = Amount/200;
            cout<<"200 no = "<<n3<<endl;
            Amount = Amount/200;
            break;
        }
        case 4:{
            n4 = Amount/100;
            cout<<"100 no = "<<n4<<endl;
            Amount = Amount/100;
            break;
        }
        case 5:{
            n5 = Amount/50;
            cout<<"50 no = "<<n5<<endl;
            Amount = Amount/50;
            break;
        }
        case 6:{
            n6 = Amount/20;
            cout<<"20 no = "<<n6<<endl;
            Amount = Amount/20;
            break;
        }
        case 7:{
            n7 = Amount/10;
            cout<<"10 no = "<<n7<<endl;
            Amount = Amount/10;
            break;
        }
      }
    }
    return 0;
}