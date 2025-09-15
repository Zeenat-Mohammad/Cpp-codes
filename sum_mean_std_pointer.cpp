// sum,mean,std of array using pointers
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int size,sum=0,mean=0,std=0,var=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int *p=arr;
    for(int i=0;i<size;i++){
        sum+=p[i];
    }
    mean=sum/size;
    cout<<"\nSum = "<<sum;
    cout<<"\nMean = "<<mean;
    for(int i=0;i<size;i++){
        var+=pow(p[i]-mean,2);
    }
    std=sqrt(var);
    cout<<"\nStandard deviation = "<<std;
    return 0;
}
