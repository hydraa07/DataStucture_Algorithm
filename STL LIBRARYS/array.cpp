 #include<iostream>
 #include<array>
 using namespace std;
 int main(){
    array<int,5> arr1 = {2,3,4,5,6};
    array<int,5> arr2 = {11,22,33,44,55};
    cout<<"the at function "<<arr1.at(2)<<" second array "<<arr2.at(3)<<endl;
    cout<<"the at function "<<arr1[2]<<" second array "<<arr2[3]<<endl;
    cout<<"the first element print using the front function "<<arr1.front()<<endl;
    cout<<"the last element print using the back function "<<arr2.back()<<endl;
    cout<<"swap two array using swap function"<<endl;
    arr1.swap(arr2);
    cout<<"first array is "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<", ";
    }
    cout<<"second array is "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<", ";
    }
    cout<<"using the fill function"<<endl;
    arr1.fill(100);// pura array 100 se fill ho jayega
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<", ";
    }

    return 0;
 }