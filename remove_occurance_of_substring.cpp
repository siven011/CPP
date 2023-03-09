#include <iostream>
#include <string.h>
using namespace std;

string removeOccurance(string s, string part) {
    while(s.length()!=0 && s.find(part)<s.length()) {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(int argc, const char** argv) {
    //string s=
    cout<<removeOccurance("dabaadaajaaakk", "aaa");
    return 0;
}