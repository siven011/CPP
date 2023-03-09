#include <iostream>
using namespace std;

int checkRS(int a[], int n) {

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e) {
        if(a[mid]>=a[0]) s=mid+1;
        else e =mid-1;
        mid=s+(e-s)/2;
    }
    int pivot = s;
    for(int i=0;i<n-1;i++) {
       
        if(a[pivot]>a[pivot+1]) return 0;
        pivot=(pivot+1)%n;
        }
    return 1;
}

int main()
{
	int n=5;
	int a[n] ={1,1,1,1,1};
	cout<<checkRS(a,n);
}