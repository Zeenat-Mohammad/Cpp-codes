// Write a program to input a string and print its length (without using strlen()

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    int len=0,i=0;
    while(s[i]!='\0'){
        len++;
        i++;
    }
    cout<<"Length of "<<s<<" is "<<len;
    return 0;
}
