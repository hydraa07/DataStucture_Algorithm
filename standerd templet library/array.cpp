#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr;
    cout<<arr.size();
    for(int i=0;i<arr.size(); i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr.at(3);
    cout<<arr.at(2);
    cout<<arr.at(1);
    cout<<"\n\n"<<endl;

    cout<<arr.max_size()<<endl;
    cout<<arr.empty()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.begin()<<endl;
    cout<<arr.front();
    return 0;
}