// Write a program to count the number of even and odd elements in an array.

#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size],max;
    cout<<"Enter elements of array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"No. of even elements = "<<even;
    cout<<"\nNo. of odd elements = "<<odd;
    return 0;
}
