#include<iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

void spiralPrint(int m,int n,vector <vector<int>> a) {
    for(int i=0; i<m; i++) {
        vector<int> temp;
        for(int j=0; j<n; j++) {
            int in;
            cin>>in;
            temp.push_back(in);
            }
        a.push_back(temp);    
    }
  
    int count = m*n;
    int arr[count];
    int up=0;
    int down =m-1;
    int left =0;
    int right = n-1;
    int dir=0;
    int x=0;
    while(count>0) {
      if(dir==0) {
        for(int i=left; i<=right; i++) {
            arr[x++]=a[up][i];
            count--;
        }
        up++;
      }

      else if(dir==1){
        for(int i=up; i<=down; i++) {
            arr[x++]=a[i][right];
             count--;
        }
        right--;
      }

      else if(dir==2){
        for(int i=right; i>=left; i--) {
            arr[x++]=a[down][i];
             count--;
        }
        down--;
      }

      else if(dir==3){
        for(int i=down; i>=up; i--) {
            arr[x++]=a[i][left];
            count--;
        }
        left++;
      }
      dir=(dir+1)%4;

    }
    for (int x:arr) cout<<x<<" ";
}

int main() {
    int m=4;
    int n=3;
    vector <vector<int>> a;
    spiralPrint(m,n,a);

}