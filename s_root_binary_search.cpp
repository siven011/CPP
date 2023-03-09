#include<iostream>
using namespace std;
long long int s_rootBS(int n) {
    int s=0;
    int e=n;
    long long int mid = s +(e-s)/2;
    long long int ans =-1;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        } 
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        } 
        else e=mid-1;
            
        mid = s +(e-s)/2;
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
    int n=37;
    int tempSol=s_rootBS(n);
    cout<<morePrecision(n,3,tempSol);
}