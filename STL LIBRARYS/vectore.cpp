#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1 {10,20,30}; // initialise yese bhi kar sakte hai;
    vector<int> v2(5);// here 5 is a size of vector ;
    vector<int> v3(4,1);//here size is a 4 and and all the element is a 1 
    // size mention karna jaruri nahi hai de bhi sakte ahi or nhhi bhi; 

    cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
    for(int i=0;i<3;i++){
        cout<<v1[i]<<", ";
    }
cout<<endl;
    for(int i=0;i<5;i++){
        cout<<v2[i]<<", ";
    }
cout<<endl;
    for(int i=0;i<4;i++){
        cout<<v3[i]<<", ";
    }

    cout<<endl;
    cout<<"the v1 capacity is:="<<v1.capacity()<<endl;
    cout<<"the v2 capacity is:="<<v2.capacity()<<endl;
    cout<<"the v3 capacity is:="<<v3.capacity()<<endl;
    v1.push_back(100);
    for(int i=0;i<v1.capacity();i++){
        cout<<v1[i]<<", ";
    }
    cout<<"after push element v1 capacity is = "<<v1.capacity()<<endl;
    cout<<endl<<endl;
    v2.push_back(500);
    for(int i=0;i<v2.capacity();i++){
        cout<<v2[i]<<", ";
    }
    cout<<"after push element v2 capacity is = "<<v2.capacity()<<endl;
    cout<<endl<<endl;
    v3.push_back(999);
    for(int i=0;i<v3.capacity();i++){
        cout<<v3[i]<<", ";
    }
    cout<<"after push element v3 capacity is = "<<v3.capacity()<<endl;
    cout<<endl<<endl;
    return 0;
}