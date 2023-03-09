#include <iostream>
using namespace std;

void selectionSort (int a[], int n) {
    for(int i=0; i<n; i++) {
        int minIndex = i;
        for(int j=i+1; j<n;j++) {
             if(a[j]<a[minIndex]) minIndex=j;
        }
        swap(a[i],a[minIndex]);
    }
}
     
        



int main(int argc, const char** argv) {
    int a[6] = {5,1,2,4,3,6};
    int n=6;
    selectionSort(a,n);
    
for (int x : a) {
        cout<<x<<" ";
    }
    return 0;
}

