#include<iostream>
using namespace std;

firstOccur(int a[], int n, int key) {
   int start=0;
   int end=n-1;
   int mid = start + (end-start)/2;
   int ans=-1;
   while(start<=end) {
       if(a[mid]==key) {
          ans=mid;
          end=mid-1;
       }
       else if(key<a[mid]) end=mid-1;
       else if(key>a[mid]) start=mid+1;
       mid = start + (end-start)/2;
   }
   return ans;
}

lastOccur(int a[], int n, int key) {
   int start=0;
   int end=n-1;
   int mid = start + (end-start)/2;
   int ans=-1;
   while(start<=end) {
       if(a[mid]==key) {
           ans=mid;
           start=mid+1;
       }
       else if(key<a[mid]) end=mid-1;
       else if(key>a[mid]) start=mid+1;
       mid = start + (end-start)/2;
   }
   return ans;
}

int main() {
    int a[8] = {1,1,1,1,2,2,4,5};
    int n=8;
    int key = 2;
    cout<<firstOccur(a,n,key)<<endl;
    cout<<lastOccur(a,n,key)<<endl;
    cout<<"Total no."<<endl;
    cout<<lastOccur(a,n,key)-firstOccur(a,n,key)+1;
}