#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple<int,int,float,string,char> t1;
    t1 = make_tuple(20,100,25.22,"ravi",'R');
    cout<<"the first data is := "<<get<0>(t1)<<endl;
    cout<<"the second data is := "<<get<1>(t1)<<endl;
    cout<<"the third data is := "<<get<2>(t1)<<endl;
    cout<<"the fourth data is := "<<get<3>(t1)<<endl;
    cout<<"the fifth data is := "<<get<4>(t1)<<endl;
    cout<<"\n\n\n";
    // for(int i=0;i<5;i++){
    //     cout<<get<i>(t1)<<", ";// yha per i ko use karna mana hai
    // }
    return 0;
}