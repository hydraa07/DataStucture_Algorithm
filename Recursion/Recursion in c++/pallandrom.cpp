#include<iostream>
using namespace std;
int pll(string &s, int i, int j){
    if(i>j){
        return 1;
    }
    if(s[i]==s[j]){
        i++;
        j--;
    }
    else{
        return 0;
    }
    pll(s,i,j);
}
int main(){
    string s = "alpola";
    int len = s.size();
    cout<<s<<endl;
    cout<<"the length "<<len<<endl;
    int ans = pll(s,0,s.size()-1);
    if(ans){
        cout<<"it is pallandrom ";
    }
    else{
        cout<<"it is not pallandrom ";
    }
    return 0;
}