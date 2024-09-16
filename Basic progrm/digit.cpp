#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int product = 1;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        int a = n%10;
        sum += a;
        product *= a;
        n = n/10;
    }
    cout<<"sum is = "<<sum<<endl<<"product is = "<<product<<endl;
    cout<<"the answer is = "<<product-sum;
    return 0;
}