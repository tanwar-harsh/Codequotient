#include <bits/stdc++.h>
using namespace std;

int searchRotatedSortedArray(int *a, int n, int target)
{
    for(int i=0;i<n;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int target;
        cin >> target;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<searchRotatedSortedArray(a, n, target)<<endl;
    }
    return 0;
}