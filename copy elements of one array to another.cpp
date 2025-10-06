// Write a program to copy elements of one array into another array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int arr_copy[n];
    for(int i=0;i<n;i++){
       arr_copy[i]=a[i];
    }
    cout<<"Copied array:\n";
    for(int i=0;i<n;i++){
        cout<<arr_copy[i]<<" ";
    }
    return 0;
}
