#include<iostream>
#include <algorithm>
using namespace std;
bool anagram(string s1,string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    if(n1!=n2) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0; i<n1; i++) {
       if(s1[i]!=s2[i]) return false;
       
    }
    return true;
    }
    
int main(int argc, const char** argv) {
    string s1,s2;
    s1 = "silent";
    s2 = "lister";
    cout<<anagram(s1,s2)<<endl;
        return 0;
    }




