#include<iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for(int i=1; i<n; i++) {
        int temp = a[i];
        int j=i-1;
        for(; j>=0; j--) {
            if(a[j]>temp) a[j+1] = a[j];
            else break;
        }
        a[j+1] = temp;
    }
}

int main(int argc, const char** argv) {
    int a[8] = {2,1,3,7,4,8,6,5};
    int n=8;
    insertionSort(a,n);
    for (int x:a) cout<<" "<<x;
    return 0;
}