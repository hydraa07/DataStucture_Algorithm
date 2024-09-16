#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,5,6,3,2,4};
    cout<<"enter the vector elements "<<endl;
    // for(auto i:v){
    //     cin>>i;
    // }
    for(auto i = v.begin();i<v.end();i++){
        cout<<*i<<" ";
    }
    v.push_back(100);
    // int size = v.resize()
    // cout<<size<<endl;
    int c = v.capacity();
    cout<<c<<endl;
    // cout<<endl<<endl;
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // v.push_back(5);
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // v.pop_back();
    // v.pop_back();
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    return 0;
}