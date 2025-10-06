// Write a program to find the largest element in an array.
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"Largest element in array is "<<max;
	return 0;
}
