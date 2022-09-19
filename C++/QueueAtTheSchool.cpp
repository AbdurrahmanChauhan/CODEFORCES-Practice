#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i + 1] = 'B';
                s[i] = 'G';
                i++;
            }
        }
    }
    cout << s;
    return 0;
}