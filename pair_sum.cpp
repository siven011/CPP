#include<iostream>
using namespace std;
int main() {
    int n, s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1; j<n; j++) {
            if(a[i]+a[j]==s) {
               cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
}