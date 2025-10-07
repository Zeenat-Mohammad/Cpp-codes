// Write a program to count the number of positive and negative numbers in an array.

#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int pos=0,neg=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            neg++;
        }
        else{
            pos++;
        }
    }
    cout<<"No. of positive elements = "<<pos;
    cout<<"\nNo. of negative elements = "<<neg;
    return 0;
}
