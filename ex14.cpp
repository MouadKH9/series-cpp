#include <iostream>

using namespace std;
int main()
{
    int i, j;
    cout << "\t|\t";
    for (j = 1; j < 10; j++)
        cout << j << "\t";
    cout << "\n";
    for (j = 1; j < 85; j++)
        cout << "-";
    cout << "\n";
    for (i = 1; i <= 10; i++)
    {
        cout << i << "\t|\t";
        for (j = 1; j < 10; j++)
            cout << j * i << "\t";
        cout << "\n";
    }
}