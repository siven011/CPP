#include<iostream>
#include <math.h>
using namespace std;
sRoot(int n) {
    int a[n];
    int y=INT32_MAX;
    int ans=-1;
    for(int i=1; pow(i,2)<=n;i++){
        if(pow(i,2)==n) return i;
        else {
            int x = abs(pow(i,2)-n);
            if(x<y){
                ans=i;
                y=x;
            }
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double ans = tempSol;
    double factor =1;
    for(int i=0; i<precision; i++) {
        factor = factor/10;
        for(double j = ans; j*j<n; j+=factor) ans = j;
    }
    return ans;
}

int main() {
    int tempSol=sRoot(30);
    cout<<morePrecision(30,3,tempSol);
}
