#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin>>n;
        int a[n];
        int c=1,d=0;
        for(int i=0; i<n; i++) {
            cin>>x;
            a[i] = x;
        }
    sort(a,a+n);
        for(int i=0; i<n; i++) {
            if(a[i]==a[i+1]) c++;
            if(a[i]!=a[i+1]) c=1;
            d=max(c,d);
        }
        cout<<"max fre :"<<d<<endl;
}