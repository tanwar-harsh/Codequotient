/* #include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int *a, int *n)
{
    if (*n == 0 || *n == 1)
    {
        return;
    }
    for (int i = 0; i < *n - 1; i++)
    {
        for (int j = 0; j < *n - 1; j++)
        {
            if (a[j] != a[j + 1])
            {
                a[j]
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    removeDuplicates(a, &n);

    return 0;
} */

//approch 2
#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int *a, int *n)
{
    if (*n == 0 || *n == 1)
    {
        return;
    }
    int b[*n];
    int j = 0;
    for (int i = 0; i < *n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            b[j++] = a[i];
        }
    }
    b[j++]=a[*n-1];

    for (int i = 0; i < j; i++)
    {
        a[i] = b[i];
    }
    *n=j;
}

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    removeDuplicates(a, &n);

    return 0;
}
