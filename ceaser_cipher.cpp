#include <iostream>
#include <string.h>
using namespace std;


string ceaserCipher(string s, int n) {
    char c;
    for(int i=0; i<s.length(); i++) {
        c = ((s[i]-'a'+n)%26)+97;
        s[i]=c;
    
}
return s;
}

int main() {
    string s="axy";
    cout<<ceaserCipher(s,2);
    return 0;
}