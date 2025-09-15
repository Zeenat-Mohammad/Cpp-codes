// count vowels in a string using pointers
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    char *p=&s[0];
    int vol=0;
    for(int i=0;i<s.length();i++){
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'){
            vol++;
        }
    }
    cout<<"Total vowels = "<<vol;
    return 0;
}
