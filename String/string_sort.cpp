#include <iostream>
#include <string>
using namespace std;

string StringChallenge(string str) {
   for(int i=0; i<str.length(); i++){

     for(int j=i+1;j<=str.length(); j++){
        if(str[i]>str[j]){
            swap(str[i],str[j]);
        }    
    }   
   }
   
  return str;

}

int main() { 
   
string str;
cin>>str;
cout<<"i am here"<<endl;
//  for(int j=0; j<=str.length(); j++){
//     cout<<str[j];
//   } 
string pp = StringChallenge(str);
for(int i=0; i<pp.length();){
    cout<<str[i]<<" "<<i;
    i++;
}
cout<<endl<<pp<<" "<<pp.length();
cout<<endl<<pp[4];
return 0;
}







// without return

// #include <iostream>
// #include <string>
// using namespace std;

// void StringChallenge(string &str) {
//    for(int i=0; i<=str.length()-1; i++){

//      for(int j=i+1;j<=str.length(); j++){
//         if(str[i]>str[j]){
//             swap(str[i],str[j]);
//         }    
//     }   
//    }
//    for(int k=0; k<=str.length(); k++){
//     cout<<str[k];
//   }

// }

// int main() { 
   
// string str;
// cin>>str;
// cout<<"i am here"<<endl;
// //  for(int j=0; j<=str.length(); j++){
// //     cout<<str[j];
// //   } 
// StringChallenge(str);
// return 0;
// }