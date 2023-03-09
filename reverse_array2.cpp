#include<iostream>
using namespace std;
void reverseArray(int a[], int n) {
    int s=0, e = n-1;
    while(s<e) {
        swap(a[s++],a[e--]);
    }
}

int main() {
    int a[4] = {1,2,3,4};
    int n = 4;
    reverseArray(a,n);
    for(int x:a) cout<<x<<" ";
    cout<<endl;
}