#include<iostream>
#include<vector>
// vector ke under vector banta hai 
using namespace std;
void display(vector<vector<int> > &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int value,n,m;
    vector<vector<int> > v;
    cout<<"enter the initial row size of vector"<<endl;
    cin>>n;
    cout<<"enter the initial col size of vector"<<endl;
    cin>>m;
    cout<<"enter the values of vector "<<endl;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
        cin>>value;
        temp.push_back(value);
        }
        v.push_back(temp);
    }
    display(v);
    return 0;
}