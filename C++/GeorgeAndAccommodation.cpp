#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
        if (arr[i][1] - arr[i][0] > 1)
            ans++;
    }
    cout << ans;
    return 0;
}