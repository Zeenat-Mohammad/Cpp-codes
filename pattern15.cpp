/* Pattern
    1      1
    12    21
    123  321
    12344321
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
