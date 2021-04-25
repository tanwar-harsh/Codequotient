#include <bits/stdc++.h>
using namespace std;

int kthLargest(int a[], int n, int k)
{
    sort(a, a + n);
    return a[n - k - 1];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << kthLargest(a, n, k) << endl;
    }

    return 0;
}