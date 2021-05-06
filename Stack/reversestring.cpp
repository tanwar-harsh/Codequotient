#include <bits/stdc++.h>
using namespace std;

void reverse(string &s)
{
    stack<int> st;

    for (char ch : s)
    {
        st.push(ch);
    }

    
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            string s;
            cin >> s;
            reverse(s);
            cout << s << endl;
        }
    }

    return 0;
}