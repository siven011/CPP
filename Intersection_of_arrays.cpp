#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                b[j] = INT32_MIN;
                break;
            }
        }
    }
}
