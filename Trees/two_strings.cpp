#include<iostream>
#include<string>
using namespace std;
bool twoString(string s1,string s2){

    for(int i=0; i<s1.length(); i++ ){

        for(int j=0; j<s2.length(); j++){

            if(s1[i]==s2[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    bool ans = twoString(s1,s2);
    cout<<"given two string "<<ans<<endl;
    return 0;
}