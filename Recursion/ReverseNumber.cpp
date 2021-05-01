#include <iostream>
using namespace std;

void reverse(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n % 10;
    reverse(n / 10);
}
int main()
{
    int n;
    cin >> n;

    reverse(n);
    cout << endl;
    return 0;
}