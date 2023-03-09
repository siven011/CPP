#include<iostream>
using namespace std;
binarySearchRotatedArray(int a[], int n, int key) {
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while(s<e) {
        if(a[mid]>=a[0]) s=mid+1;
        else e = mid;
        mid = s +(e-s)/2;
    }
    int pivot=s;

     if(a[pivot]<=key && key<=a[n-1]) {
    s=pivot;
    e=n-1;
    mid = s +(e-s)/2;
    while(s<=e) {
        if(a[mid]==key) return mid;
        else if(a[mid]>key) e=mid-1;
        else s=mid+1;
         mid = s +(e-s)/2;
    }
    }
    
    else {
    s=0;
    e=pivot-1;
    mid = s +(e-s)/2;
    while(s<=e) {
        if(a[mid]==key) return mid;
        else if(a[mid]>key) e=mid-1;
        else s=mid+1;
         mid = s +(e-s)/2;
    }
    }
   
    return -1;
}

int main() {
    int a[5] = {5,7,8,2,4};
    int n=5;
    int key=2;
    cout<<binarySearchRotatedArray(a,n,key);
}