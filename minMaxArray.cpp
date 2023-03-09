#include <iostream> 
using namespace std;
int main() {
    int s,min,max,y;
    cout<<"Enter the size of array";
    cin>>s;
    int a[s];
    for (int i =0; i<s; i++) {
        cin>>y;
        a[i] = y;
    }
    max = a[0];
    min = a[0];
    for(int i =0; i<s; i++) {
       if(a[i]>max)
          max = a[i];
       if(a[i]<min)
          min = a[i];   
    }
    cout<<"max and min: "<<max<<" "<<min;
}