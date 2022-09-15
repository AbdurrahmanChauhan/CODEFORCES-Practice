#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int matrix[5][5], ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                ans = abs(3 - (i + 1)) + abs(3 - (j + 1));
            }
        }
    }
    cout << ans;
    return 0;
}