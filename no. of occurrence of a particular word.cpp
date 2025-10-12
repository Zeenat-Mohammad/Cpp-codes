#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1="the this this and";
    string s2="this";
    int c=0;
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                if(s1[i-1]==s2[j-1]||s1[i-1]==' '&& j==0){
                  if(s1[i+1]==s2[j+1]||s1[i+1]=='\0'||s2[j+1]=='\0'){
                        c++;
                    }
                }
            }
        }
    }
    cout<<"Number of occurance of "<<s2<<" is "<<c/s2.size();
    return 0;
}
