/* pattern
       1
      121
     12321
    1234321
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-2;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
