#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    cout<<"arr is "<<arr<<endl;
    cout<<"arr is "<<&arr[0]<<endl;
    cout<<"arr is "<<&arr<<endl;
    int *p=arr;
    // p = arr;
    cout<<endl<<endl;
    cout<<"arr is "<<*arr+1<<endl;
    cout<<"arr is "<<*(arr+1)<<endl;
    cout<<"arr is "<<*(arr)+3<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<5[arr]<<endl<<*(7+arr);
    return 0;
}