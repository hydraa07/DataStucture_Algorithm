#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    int temp;
    for(int i=1;i<n;i++){
        temp = arr[i];
        int j=i-1;
        for(;i>=0;j--){  
            if(arr[j]>temp){        // shift kardo 
                arr[j+1]=arr[j];
            }
            else{   // ruk jao 
                if(j==0 && arr[j]>temp ){
                    arr[j]=temp;
                }                
                break;
            }
        }
        arr[j+1]=temp; 
    }
    cout<<"the sorted array is "<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
        
     }
}
int main(){
    int n;
    cout<<"enter array size "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    return 0;
}




// Insertion sort in C++

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[5];
  for(int i=0;i<5;i++){
    cin>>data[i];
  }
  insertionSort(data, 5);
  cout << "Sorted array in ascending order:\n";
  printArray(data, 5);
}