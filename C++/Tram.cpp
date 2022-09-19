#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0, nmax = 0;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        cin >> a[i][1];
        if (i == 0)
        {

            nmax = a[i][1];
            max = a[i][1];
        }
        else
        {
            nmax = (nmax - a[i][0] + a[i][1]);
            max = (nmax > max ? nmax : max);
        }
    }
    cout << max;
    return 0;
}