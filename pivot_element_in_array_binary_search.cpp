#include<iostream>
using namespace std;
//finding pivot in monotonically increasing elements
int pivotElement(int a[], int n) {
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while(s<=e) {
        if(a[mid]>=a[0]) s=mid+1;
        else   e=mid-1;
        mid = s +(e-s)/2;
    }
    return a[s];
}

int main() {
    int a[7]= {3,4,5,-1,0,2,1};
    int n=7;
    cout<<pivotElement(a,n);
}