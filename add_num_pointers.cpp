// To add two numbers using pointers

#include <iostream>
using namespace std;
int main(){
	int num1,num2,sum=0;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	int *p1=&num1;
	int *p2=&num2;
	sum=*p1+*p2;
	cout<<"Sum of "<<num1<<" and "<<num2<<" are "<<sum;
	return 0;
}
