#include <iostream>
#include <vector>
using namespace std;

void sumOfArray(int a[], int n, int b[], int m) {
    int ans1=0, ans=0;   
    for(int i=0;i<n;i++) ans1 = ans1 * 10 + a[i];
    for(int i=0;i<m;i++) ans = ans * 10 + b[i];
    ans=ans1+ans;
    vector<int> c;
    for(int i=0; ans>0; i++) {
        c.push_back(ans%10);
        ans = ans /10;
    }
    int x =c.size()-1;
    for(int i=x ;i>=0; i--) cout<<c[i]<<" ";
}

int main()
{
	int n=3;
	int a[n] ={1,2,3};
    int m=2;
	int b[m] ={1,9 };
	sumOfArray(a,n,b,m);
    
}