#include<iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i=0; i<n-1; i++) {
        int swapped = false;
        for (int j=i; j<n; j++) {
            if(a[j]>a[j+1]) {
              swap(a[j],a[j+1]);
              swapped = true;
        }
    }
    if(swapped==false) break;
}
}
int main(int argc, const char** argv) {
    int a[8] = {2,1,3,7,4,8,6,5};
    int n=8;
    bubbleSort(a,n);
    for (int x:a) cout<<" "<<x;
    return 0;
}