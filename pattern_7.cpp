/* Pattern
	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int r=4;
    int c=7;
    for(int i=0;i<r;i++){
        for(int j=ceil(c/2)-1;j>=i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=ceil(c/2)-1;j>=i;j--){
            cout<<"*";
        }
        for(int j=floor(c/2)-2;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
