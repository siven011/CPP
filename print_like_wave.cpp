#include<iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

void getArray(int n,int m,vector <vector<int>> a) {
    for(int i=0; i<n; i++) {
        vector<int> temp;
        for(int j=0; j<m; j++) {
            int in;
            cin>>in;
            temp.push_back(in);
            }
        a.push_back(temp);    
    }
    int arr[n*m];
    int x=0;
    for(int i=0; i<m;i++) {
        if(i%2==0) {
       for (int j=0; j<n; j++) arr[x++]=a[j][i];
        }
       else {
        for (int j=n-1; j>=0; j--) arr[x++]=a[j][i];
       }
    }
    for(int i=0; i<m*n; i++) cout<<arr[i]<<" ";
}

/*void printWave(int n, int m, vector<vector<int>> a) {
    int arr[n*m];
    int x=0;
    for(int i=0; i<m;i++) {
        if(i%2==0) {
       for (int j=0; j<n; j++) arr[x++]=a[j][i];
        }
       else {
        for (int j=n-1; j>=0; j--) arr[x++]=a[j][i];
       }
    }
    for(int i=0; i<m*n; i++) cout<<arr[i]<<" ";
}*/

int main() {
    int n=3;
    int m=3;
    vector <vector<int>> a;
    getArray(n,m,a);
    /*printWave(n,m,a);*/
}