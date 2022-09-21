#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int y;
    bool flag = true;
    cin >> y;
    y++;
    while (flag == true)
    {
        string s = to_string(y);
        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3])
        {
            if (s[1] != s[2] && s[1] != s[3])
            {
                if (s[2] != s[3])
                {
                    cout << y;
                    flag = false;
                }
                else
                    y++;
            }
            else
                y++;
        }
        else
            y++;
    }
    return 0;
}