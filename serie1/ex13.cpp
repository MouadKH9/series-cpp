#include <iostream>

using namespace std;
int main()
{
    int n, i, j;
    cout << "Entrer le nombre des lignes: \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            cout << " ";
        for (j = -i; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}