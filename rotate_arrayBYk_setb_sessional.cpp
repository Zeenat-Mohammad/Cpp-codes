#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the  elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k,a[n];
    cout<<"Enter a value by which you want to rotate an array: ";
    cin>>k;
    for(int i=0;i<n;i++){
        a[i]=arr[(i+k)%n];
    }
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
	}
    return 0;
}
