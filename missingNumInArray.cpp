#include <iostream>
using namespace std;

int findAMissingNum (int a[], int n) {
    int sum=0,num;
    for (int i=0; i<n; i++) {
        sum = sum + a[i];
    }
    int sum2 = (n+1)*(n+2)/2;
    num = sum2-sum;
    if(num != 0) cout<<"num :"<<num<<endl;
    else cout<<"no missing num"<<endl;
    return 0;
}

int main() {
    int a[5] = {1,2,5,3,6};
    findAMissingNum(a,5);
    return 0;
}