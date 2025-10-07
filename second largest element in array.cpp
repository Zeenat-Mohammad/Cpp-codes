// Write a program to find the second largest element in an array.

#include <iostream>
using namespace std;

int  main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    bool flag=false;
    cout<<"Enter elements of array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
	        if(arr[j]>arr[j+1]){
	            swap(arr[j],arr[j+1]);
	        }
        }
    }
    cout<<"Sorted array:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSecond largest element in array is "<<arr[size-2];
    return 0;
}
