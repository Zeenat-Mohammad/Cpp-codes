// Write a program to convert all uppercase characters in a string to lowercase.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}
