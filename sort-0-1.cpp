#include<iostream>
using namespace std;
int main() {
    int n,count=0;
    cin >> n;
    bool a[n];
    bool b[n]={0};
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) {
        if(a[i]==1) {
            count++;
        }
    }
    for(int i=0; i<count; i++) {
        b[n-1-i]=1;
    }
    for(int x:b) cout<<" "<<x;
}