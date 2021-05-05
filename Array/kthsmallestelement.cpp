#include <algorithm>
#include <iostream>
using namespace std;

int kthSmallest(int a[], int n, int k)
{
    sort(a, a + n);

    return a[k - 1];
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin>>k;

    cout << kthSmallest(a, n, k);
    return 0;
}