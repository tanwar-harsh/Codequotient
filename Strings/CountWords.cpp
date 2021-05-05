#include <bits/stdc++.h>
using namespace std;
int total_words(char *str)
{
    int count = 0;
    int temp = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {
            temp = 0;
        }
        else if (temp == 0)
        {
            temp = 1;
            count++;
        }
        ++str;
    }
    return count;
}
int main()
{

    char str[100];
    for(int i=0;i<100;i++){
        cin>>str[i];
    }
    cout << total_words(str);
    return 0;
}