#include <iostream>
using namespace std;

rotate(int a[],int n, int k){
	k = k % n;
	for (int i = 0; i < k; i++)
	{
		int l = a[n - 1];
		for (int j = 0; j < n; j++)
		{
			a[n - 1 - j] = a[n - 2 - j];
		}
		a[0] = l;
	}
}

rotate2(int a[],int n, int k) {
	int b[n], j=0;
    for(int i=0; i<n; i++) b[(i+k)%n]=a[i];
	for(int i=0; i<n; i++) a[j++]=b[i];
}

int main()
{
	int n=5;
	int a[n] = {1,2,3,4,5};
	int k=7;
	rotate2(a,n,k);
	for (int x : a)
	cout << " " << x;
}
