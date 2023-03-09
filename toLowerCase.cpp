#include <iostream>
using namespace std;

string toLowerCase(string s, int n) {
    for (int i=0; i<n; i++) {
        if(s[i]>=65 && s[i]<=90)  s[i] = s[i]-'A'+'a';
    }
    return s;
}

string toUpperCase(string s, int n) {
    for (int i=0; i<n; i++) {
        if(s[i]>=97 && s[i]<=122)  s[i] = s[i]-'a'+'A';
    }
    return s;
}

bool palindrome(string s,int n){
   s=toLowerCase(s,s.length());
   int st =0, e=n-1;
   while(st<e) {
    if(s[st++]!=s[e--]) return 0;
   }
   return 1;
}


int main() {
    string s = "SiVa";
    cout<<toLowerCase(s,s.length())<<endl;
    s = "SiVa";
    cout<<toUpperCase(s,s.length())<<endl;
    s= " @SI#is@ @SI#is@ ";
    cout<<palindrome(s,s.length());

    
}