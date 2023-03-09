#include <iostream>
#include <string.h>
using namespace std;

int romanToInt(string s) {
    string r ="IVXLCDM";
    int ans=0;
    int a[7]={1,5,10,50,100,500,1000};
    for(int i=0; i<s.length(); i++) {
        int x =r.find(s[i]);
        int y =r.find(s[i+1]);
        if(x<y) ans =ans - a[x];
        else ans =ans + a[x];
    }
    return ans;
}

int main() {
    string s ="XIV";
    cout<<romanToInt(s);
}