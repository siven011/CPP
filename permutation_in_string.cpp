#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

bool permutation(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    sort(s1.begin(),s1.end());
    string temp;
    for(int i=0; i<m;i++) {
        for(int j=i; j<n; j++) temp.push_back(s2[j]);
       //cout<<temp<<endl;
        n++;
        sort(temp.begin(),temp.end());
        if(temp==s1) return 1;
        temp.clear();
    }
    return 0;
}

bool checkEcual(int a[26], int b[26]) {
    for(int i=0; i<26; i++) {
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

bool permutation2(string s1,string s2) {
    int n = s1.length();
    int m = s2.length();
    int a[26]={0};
    int b[26]={0};
    for(int i=0; i<n; i++){
        int num =0;
        num = s1[i]-'a';
        a[num]++;
    }

    int i=0;
    while(i<n){
        int index = s2[i]-'a';
        b[index]++;
        i++;
    }
    if(checkEcual(a,b)) return 1;
    
}

int main() {
    string s1 = "iai";
    string s2 = "sivasbaii";
    //cout<<"enter"<<endl;
    cout<<permutation(s1,s2);
}