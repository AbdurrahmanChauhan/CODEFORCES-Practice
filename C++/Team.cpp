#include <iostream>
#include <conio.h>
using namespace std;

int c = 0;
void solve()
{
    int P, V, T;
    cin >> P >> V >> T;
    if ((P + V + T) >= 2)
        c++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
    cout << c;
}