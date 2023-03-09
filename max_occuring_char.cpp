#include <iostream>
#include <string.h>
using namespace std;

char maxOccur(string s,int n ) {
    int count=1;
    int y=1;
    char ans;
    for(int i=0; i<n; i++) {
        for (int j=1; j<n; j++) {
            if(s[i]==s[j]){
                count++;
            }

        
        if(count>=y) {
            y=count;
            ans=s[i];
        }
    }
    return ans;
}
}

char maxOccur2(string s,int n ) {
    int a[26] ={0};
    
    for (int i=0; i<n; i++) {
        char c = s[i];
        int num=0;
        if(c>='a' && c<='z') {
            num = c-'a';
        }
        else if(c>='A' && c<='Z') {
            num=c-'A';
        }
        a[num]++;
    }
    
    int maxi=-1;
    int ans;
    for(int i=0; i<26; i++) {
        if(a[i]>maxi) {
          maxi = a[i];
          ans = i;
        }
    }
    char x = 'a'+ ans;
    return x;
}


int main() {
    string s ="partiiiiiiiiiicle";
    string s1 ="partiiiiiiiiiicl";
    cout<<maxOccur2(s,s.length());
}