#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w != 2 && w != 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}