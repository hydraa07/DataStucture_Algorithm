 /*      
    **************************************************using recursion *******************************
 */
/*
 #include<iostream>
 using namespace std;
 int fibo(int n){
    int ans;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
     }
     cout<<n<<" ";
     ans = fibo(n-1)+fibo(n-2);
     return ans;
 }    
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans = fibo(n);
    cout<<" the index is =>"<<ans<<endl;
    return 0;
 }
 */

/*
    *******************************using loop******************************************
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int *arr=new int[n];
     int  f1=0,f2=1,f3;
     cout<<f1<<" "<<f2<<" ";
    for(int i=2;i<=n;i++){
       
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3<<" ";
    }
    return 0;
}