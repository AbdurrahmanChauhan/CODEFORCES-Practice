#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (int(input[0]) > 96)
        input[0] = char(int(input[0]) - 32);
    cout << input;
    return 0;
}