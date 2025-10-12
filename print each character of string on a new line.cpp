// Write a program to print each character of a string on a new line.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
