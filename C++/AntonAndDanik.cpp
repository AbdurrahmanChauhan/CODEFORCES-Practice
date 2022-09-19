#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, A = 0, D = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            A++;
        else
            D++;
    }
    if (A > n / 2)
        cout << "Anton";
    else if (D > n / 2)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}