#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << sqrt(a[i]) << endl;
    }
    return 0;
}