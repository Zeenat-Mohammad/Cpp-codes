#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  cout<<"Before swapping:\n";
  cout<<"a="<<a<<" b="<<b<<endl;
  swap(a,b);
  cout<<"After swapping:\n";
  cout<<"a="<<a<<" b="<<b;
  return 0;
}
