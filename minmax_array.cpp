#include <iostream>
#include <math>
using namespace std;
int getMax(int a[],int n) {
    int max =INT32_MIN;
    for(int i=0; i<n;i++) {
        if(a[i]>max) max =a[i];
    }
    return max;
}

int main()
{


	int a[] = {1,4,4,3,9,0,8,9};
    int n = 8;
    cout<<getMax(a,n)<<endl;
}
		



