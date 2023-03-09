#include<iostream>
using namespace std;

int findMinMax (int a[], int len) {
    int i, max, min;
    if (len%2==0) {
        if (a[0] > a[1]) {max = a[0]; min = a[1];}
        else {max = a[1]; min = a[0];}
        i =2;
    }
    else {
        max = a[0]; min = a[0]; i=1; 
    }
    while (i<len - 1)
    {   if (a[i] > a[i+1]) {
        if (a[i] > max) max = a[i];
        if (a[i+1] < min) min = a[i+1];
    }
        else {
            if (a[i] > min) min = a[i];
            if (a[i+1] < max) max = a[i+1];
        }
        i+=2;
    }
    cout<<"max : "<<max<<endl;
    cout<<"min : "<<min<<endl;
    return 0;

};

int main() {
    int arr[8] ={1,3,56,67,655,67,89,0};
    findMinMax( arr, 8);
    return 0;
}