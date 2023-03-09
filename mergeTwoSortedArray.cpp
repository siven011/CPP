#include <iostream>
using namespace std;

void mergeSortedArrays (int a[], int b[],int n1, int n2, int c[]) {
    int i=0,j=0,k=0;
    while(i<n1 && j<n2) {
        if(a[i]<b[j]) c[k++] = a[i++];

        else c[k++] = b[j++];
    }

    while(i<n1) c[k++] = a[i++];

    while(j<n2) c[k++] = b[j++];
}

int main() {
    int a[3] = {2,5,7};
    int b[4] = {0,1,4,6};
    int c[7];
    mergeSortedArrays(a,b,3,4,c);
    for(int x:c) cout<<x<<" ";
    
    return 0;
}
