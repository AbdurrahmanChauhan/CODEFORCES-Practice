#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x, ans;
    cin >> x;
    ans = (x / 5 + (x % 5 > 0 ? 1 : 0));
    cout << ans;
    return 0;
}