#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int k;
        cin >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (k == a[i])
            {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if (found)
        {
            continue;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}