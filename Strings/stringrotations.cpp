#include <bits/stdc++.h>
using namespace std;

bool isRotation(string a, string b)
{
   if (a.length() != b.length())
        return false;
  
   string temp = a + a; 
  return (temp.find(b) != string::npos);
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        string a, b;
        cin >> a >> b;
        if (isRotation(a, b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}