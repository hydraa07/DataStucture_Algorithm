// /*1 2 3 4
//   1 2 3 4
//   1 2 3 4
//   1 2 3 4 */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// /*1 2 3
//   4 5 6
//   7 8 9 */
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n; j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// /*
// *
// * *
// * * *
// * * * *
// * * * * *
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// /*
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i; j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=i;j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
// A A A A
// B B B B
// C C C C
// D D D D
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch = 'A';
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n; j++){
//             cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }



// /*
// A B C D
// A B C D
// A B C D
// A B C D
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     // char ch ='A';
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         for(int j=1;j<=n; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// /*
// A B C
// B C D
// C D E
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         ch = 'A'+i-1;
//         for(int j=1;j<=n; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
// A 
// B B 
// C C C 
// D D D D
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         ch = 'A'+i-1;
//         for(int j=1;j<=i; j++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
// A
// B C
// C D E
// D E F G
// E F G H I
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         ch = 'A'+i-1;
//         for(int j=1;j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// /*
// E
// D E
// C D E
// B C D E
// A B C D E 
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         char ch = 'A';
//         ch = 'A'+n-i;
//         for(int j=1;j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
//         *
//       * *
//     * * *
//   * * * *
// * * * * * 

// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





/*
* * * * *
* * * *
* * *
* *
*
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1;j<=i; j++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



/*
* * * * *
  * * * *
    * * *
      * *
        *
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// /*
// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
//         5
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=n; j>=n-i+2;j--){
//             cout<<" ";
//         }
//         for(int j=1; j<=n-i+1;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



/*
1 2 3 4
  2 3 4
    3 4
      4
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int a;
//         a=i;
//         for(int j=n; j>=n-i+2;j--){
//             cout<<" ";
//         }
//         for(int j=1; j<=n-i+1;j++){
//             cout<<a;
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// /*
//        1
//      2 3
//    6 5 6
//  7 8 9 10
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<a;
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// /*
//         1     
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a;
//         a=i-1;
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<k;
//         }
//         // int a;
//         // a = i-1;
//         for(int x=n; x>n-(i-1);x--){
//             cout<<a;
//             a--;
//         }
//         cout<<endl;
//     }
//         return 0;
// }





/*
 
1 2 3 4 5 5 4 3 2 1             1 2 3 4 5 * 5 4 3 2 1     
1 2 3 4 * * 4 3 2 1             1 2 3 4 * * * 4 3 2 1
1 2 3 * * * * 3 2 1             1 2 3 * * * * * 3 2 1
1 2 * * * * * * 2 1             1 2 * * * * * * * 2 1
1 * * * * * * * * 1             1 * * * * * * * * * 1
*/
