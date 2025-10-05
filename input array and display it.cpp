// Write a program to input 5 integers into an array and display them.

#include <iostream>
using  namespace  std;

int main(){
    int size;
    cout<<"Enter size of array:  ";
    cin>>size;
    int array[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Array:\n";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
