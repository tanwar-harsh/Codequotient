#include <bits/stdc++.h>
using namespace std;

int kthLargest(int a[])
{
    sort(a, a + 5);
    if (a[4] == a[3])
    {
        if (a[3] == a[2])
        {
            return a[1];
        }
        else{
            return a[2];
        }
    }

    return a[3];
}

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << kthLargest(a) << endl;

    return 0;
}