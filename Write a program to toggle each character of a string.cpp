// Write a program to toggle each character of a string (upper ? lower, lower ? upper).

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}
