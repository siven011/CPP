#include <iostream>
#include <string.h>
using namespace std;

string spaceReplace (string s, int n) {
    string s1;
    for(int i=0; i<n; i++) {
        if(s[i]==' ') {
          s1.push_back('@');
          s1.push_back('4');
          s1.push_back('0');
        }
        else
         s1.push_back(s[i]);
    }
    return s1;
}

int main() {
    string s = "My name is Siva";
    cout<<spaceReplace(s,s.length());
    
}

