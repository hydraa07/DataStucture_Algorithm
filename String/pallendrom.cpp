// #include<iostream>
// #include<string>
// #include<stdlib.h>
// using namespace std;
// int Size(char arr[]){
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// void revers(char ch[],int size){
//     for(int i=size-1;i>=0;i--){
//         cout<<ch[i];
//     }

// }
// int palindrome(char ch[],int size){
//     int s=0;
//     int e = size-1;
//     while(s<=e){
//         if(ch[s]==ch[e]){
//             s++;
//             e--;
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
// }
// int main(){
//         char ch[20];
//         cout<<"enter the string input"<<endl;
//         cin>>ch;
//         cout<<ch;
//         int size = Size(ch);
//         cout<<endl;
//         cout<<"the size is = ";
//         cout<<size<<endl;
//         // cout<<"the second lenght"<<strlen(ch)<<endl;
//         cout<<"the revers array is = ";
//         revers(ch,size);
//         // cout<<"the second revers"<<strrev(ch)<<endl
//         bool p;
//         cout<<endl;
//         p = palindrome(ch,size);
//         if(p==1){
//             cout<<"it is a palindrome"<<endl;
//         }
//         else{
//             cout<<"it is not a palindrome"<<endl;
//         }
        
//     return 0;
// }



int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numSize;i++){
        if(nums[i]+nums[i+1]==target){
            return (i,(i+1));
        }
    }
}