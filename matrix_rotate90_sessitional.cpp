/*code to rotate a matri by 90 degrees
eg:- 1 2 3          to     7 4 1 
     4 5 6                 8 5 2
     7 8 9                 9 6 3
*/
#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter numbers of rows of matrix: ";
    cin>>r;
    cout<<"Enter numbers of columns of matrix: ";
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of matrix:\n";
    int b[r][c],count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=3-1;j>=0;j--){
                b[i][count++]=a[j][i];
        }
        count=0;
    }
    cout<<"\nMatrix after rotating 90 degree:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

