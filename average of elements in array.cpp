// Write a program to find the average of elements in an array.
#include <iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int array[size],avg=0;
	cout<<"Enter elements of array:\n";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	for(int i=0;i<size;i++){
		avg+=array[i];
	}
	cout<<"Average of all elements of array is "<<avg/size;
	return 0;
}
