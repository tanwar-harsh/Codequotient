#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;
    if (n == 1)
    {
        cout << a << endl;
    }
    else
    {
        cout << a << endl
             << b << endl;
        for (int i = 2; i < n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            cout << c << endl;
        }
        
    }
    return 0;
}