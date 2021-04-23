#include <iostream>
using namespace std;

void Fibo(int n, int a, int b)
{
    int c = a + b;
    if (n == 2)
    {
        return;
    }
    Fibo(n - 1, b, c);
    cout << c << endl;
}

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
        Fibo(n, a, b);
        cout << b << endl
             << a << endl;
    }

    return 0;
}