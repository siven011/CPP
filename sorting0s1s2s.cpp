#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int a[10] = {0,2,1,1,0,2,1,0,0,2};
    int n,i=0;
    int x=0,y=0,z=0;
    int len = sizeof(a)/sizeof(a[0]); 
    while(i<len) {
        n = a[i];
        if (n==0) x++;
        else if (n==1) y++;
        else z++;
        i++;
    }

    cout<<x<<"\n"<<y<<"\n"<<z<<endl;
    
    for (int i=0; i<len; i++) {
        if (i<x) a[i] = 0;
        else if (i>=x && i<(x+y)) a[i] = 1;
        else a[i] = 2;
    }
    for (int x : a) cout<<x<<" ";
   
    return 0;
}