#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int res[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            res[i] = b[i];
        }
        else
        {
            res[i] = res[i-1] - a[i] + b[i];
        }
    }
    sort(res, res + n);
   
   cout<<res[n-1];


    return 0;
}