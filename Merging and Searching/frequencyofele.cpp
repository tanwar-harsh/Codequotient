#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n]={0};

    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                b[j] = 1;
                count++;
            }
        }
        cout << a[i] << " occurs " << count << " times " << endl;
    }
    return 0;
}