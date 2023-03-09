#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

 void compression(char a[],int n) {
    int i=0;
    int ansIndex=0;
    while(i<n) {
        int j=i+1;
        while (j<n && a[i]==a[j]) j++;
        a[ansIndex++]=a[i];
        int count = j-i;
        if(count>1) {
        string s = to_string(count);
        for (char ch:s) a[ansIndex++] = ch;
        }
        i=j;
    }
    for (int i=0; i<ansIndex; i++) cout<<a[i]<<" ";

}

int main () {
    int n=6;
    char a[n] ={'a','a','c','c','c','r'};
    compression(a,n);

}