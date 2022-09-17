#include <iostream>
using namespace std;

int main()
{
    int k, n, w, s = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        s += (i * k);
    cout << ((s - n) > 0 ? (s - n) : 0);
    return 0;
}