#include<iostream>
using namespace std;
//peak element in a mountain array
int peakElement(int a[], int n) {
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while(s<=e) {
        if(a[mid]<a[mid+1]) s=mid+1;
        else   e=mid-1;
        mid = s +(e-s)/2;
    }
    return a[mid];
}

int main() {
    int a[7]= {3,4,5,9,3,2,1};
    int n=7;
    cout<<peakElement(a,n);
}