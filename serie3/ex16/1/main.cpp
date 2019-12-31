#include <iostream>
#include "vect.h"

using namespace std;

int main()
{
    vect<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        v[i] = i + 1;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}