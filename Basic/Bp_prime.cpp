#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 0 || i == 1)
        {
            continue;
        }
        bool flag = true;

        for (int j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << endl;
        }
    }
    return 0;
}
