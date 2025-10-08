// Write a program to find the smallest element in an array.
#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array:\n";
	cin>>size;
	int a[size];
	cout<<"Enter elements of array:\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	int min=a[0];
	for(int i=0;i<size;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<"Smallest element in array is "<<min;
	return 0;
}
