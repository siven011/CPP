#include <iostream>
#include <vector>
using namespace std;

move0s(int a[],int n) {
    for(int i=0; i<n; i++){
        if(a[i]==0) {
            for (int j=i; j<n; j++) swap(a[j],a[j+1]);
        }
    }
}

move0s_v2(int a[],int n) {
    vector<int> b;
    int j=0;
    for(int i=0; i<n; i++) {
        if(a[i]!=0){
            b.push_back(a[i]);
            a[i]=0;
        }
    }
    for(int i=0; i<b.size(); i++) {
        a[j++]=b[i];
    }

}

move0s_v3(int a[],int n){
    int j = 0;
    for(int i=0; i<n; i++) {
        if(a[i]!=0) swap(a[i],a[j++]);
    }
}


int main() {
    int a[5] = {1,0,5,0,3};
    int n=5;

    move0s(a,n);
    for (int x:a) cout<<" "<<x;
    cout<<endl;

    move0s_v2(a,n);
    for (int x:a) cout<<" "<<x;
    cout<<endl;

    move0s_v3(a,n);
    for (int x:a) cout<<" "<<x;
    cout<<endl;
    
    return 0;
}

