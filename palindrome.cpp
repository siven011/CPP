#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i =0; i<n/2; i++) {
       if (s[i]!=s[n-1-i]) return false;
    } 
    return true;

}

int main () {
    cout<<"enter a string";
    string s;
    cin>>s;
   cout<<isPalindrome(s)<<endl;
}
