#include <iostream>
using namespace std;  
int main() {
    int a[5] = {1,4,3,3,6};
    int b[3] = {1,3,1};
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int x = min(n1,n2);
    int y = max(n1,n2);
    int cnt=0;
    for (int i =0; i<x; i++) {
        for (int j=0; j<y; j++) {
            
            if (b[i]==a[j]) {
                cnt++;
                
            }
        }
    }
    if (cnt>=x) std::cout << "yep" << std::endl;
    else std::cout << "nope" << std::endl;
}
    