#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
    for(int i=0; i<n; i++) {
        if(a[i]<a[i+1]) {
            if(a[i+1]>a[i+2]){
            cout<<a[i+2]<<endl;
            i++;
            }
        }
        else if(a[i]>a[i+1]) {
            if(a[i+1]<a[i+2]){
            cout<<a[i+2]<<endl;
            i++;
            }
        }
    }
}