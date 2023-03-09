#include <iostream>
using namespace std;

int main()
{
    int s,temp,y;
    cout<<"Enter the size of array";
    cin>>s;
    int a[s];
    for (int i =0; i<s; i++) {
        cin>>y;
        a[i] = y;
    }
    for (int i =0; i<s/2; i++) {
        
           temp = a[i];
           a[i] = a[s-i-1];
           a[s-i-1] = temp;
        
    }

    for(int x : a)
    cout<<"\n"<<x<<endl;

        return 0;
}
