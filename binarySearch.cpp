#include<iostream>
#include <algorithm>
using namespace std;

int binarySearch(int a[],int n, int key) {
    int start=0;
    int end=n-1;
    int mid = start+(end-start)/2;
    while(start<=end) {
        if(a[mid]==key) return mid;
        if (key>a[mid]) start = mid+1;
        else end=mid-1;
        mid = start+(end-start)/2;
    }
    return -1;
}

int main() {
    int count=0;
    int a[6] ={1,5,5,5,5,5};
    sort(begin(a),end(a));
    cout<<binarySearch(a,6,5)<<endl;
   
}
    