#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

string adjDuplicateRemoval(string s){
    for(int i=0; i<s.length();i++) {
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
        }
    }
    return s;
}

int main() {
    string s = "abbaca";
    cout<<adjDuplicateRemoval(s);
    return 0;
}