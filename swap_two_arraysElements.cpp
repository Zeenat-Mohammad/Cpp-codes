#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the  elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of array: ";
    cin>>m;
    int b[m];
    cout<<"Enter the  elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"First array before swapping:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nSecond array after swapping:\n";
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    int *p1=a;
    int *p2=b;
    if(m!=n){
        cout<<"\nSwapping can't be done!!";
    }
    else{
        for(int i=0;i<n;i++){
            swap(*(p1+1),*(p2+i));
        }
        cout<<"\nFirst array after swapping:\n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\nSecond array after swapping:\n";
        for(int i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
