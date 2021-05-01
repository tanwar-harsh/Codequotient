#include <iostream>
using namespace std;

void primeFactors(int n, int i)
{
    if (n == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        cout << 2 << endl;
        primeFactors(n / 2, i);
    }

    else if (n % i == 0)
    {
        cout << i << endl;
        primeFactors(n / i, i);
    }
    else
    {
        i += 2;
        primeFactors(n, i);
    }
}

int main()
{

    int n;
    cin >> n;
    int i = 3;

    primeFactors(n, i);

    return 0;
}