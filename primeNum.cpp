#include <iostream>
using namespace std;
int main() {
    int a,c=1;
    cout<<"enter"<<endl;
    cin>>a;
    for (int i=a; i>=2; i--) {
        if(a%i==0) c++;
        if(c>2) break;
    }
    if(c==2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}