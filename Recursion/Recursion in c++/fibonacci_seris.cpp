// #include<iostream>
// using namespace std;
// int fibo(int n){
//     //base case
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     //R R
//     fibo(n) = fibo(n-1) + fibo(n-2); 

//     return n;
// }
// int main(){
//     int num;
//     cout<<"enter the number"<<endl;
//     cin>>num;
//     int ans = fibo(num);
//     cout<<ans<<" ";
//     return 0;
// }


#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0){
        return 0;
    }
    
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int num;
    cout<<"enter the numbers"<<endl;
    cin>>num;
    for(int i=0; i<num; i++){
        cout<<fibo(i)<<"  ";
    }
    return 0;
}