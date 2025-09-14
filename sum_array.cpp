// Sum of all elements of array
#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of array:\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	cout<<"Sum of all elements of arrays are "<<sum;
	return 0;
}
