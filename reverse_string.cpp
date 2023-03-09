#include <iostream>
using namespace std;

string reverseString(string s) {
    int n = s.length();
    for (int i =0; i<n/2; i++) {
       swap (s[i],s[n-1-i]);
    } 
    return s;
}

int main () {
    cout<<"enter a string";
    string s;
    cin>>s;
    cout<<reverseString(s)<<endl;
}