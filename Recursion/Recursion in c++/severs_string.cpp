// #include<iostream>
// using namespace std;
// void revers(string& s, int n){
//     if(n==0){
//         return ;
//     }
//     cout<<s[n-1]<<" ";
//     n--;
//     revers(s,n);
// }
// int main(){
//     string s = "ardnivaR";
//     int len = s.size();
//     cout<<s<<endl;
//     revers(s,len);
//     cout<<endl<<s<<endl;
//     return 0;
// }

/************************************************ second method ************************************/
#include<iostream>
using namespace std;
void revers(string& s, int i , int j){
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    revers(s,i,j);
    // cout<<s<<endl;
}
int main(){
    string s = "ardnivaR";
    int len = s.size();
    cout<<s<<endl;
    revers(s,0,s.length()-1);
    cout<<endl<<s<<endl;
    return 0;
}