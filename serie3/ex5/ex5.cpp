#include <iostream>
using namespace std;
class A
{
    int n;
    float x;

public:
    A(int p = 2)
    {
        n = p;
        x = 1;
        cout << "** construction objet A : " << n << " " << x << "\n";
    }
};

class B
{
    int n;
    float y;

public:
    B(float v = 0.0)
    {
        n = 1;
        y = v;
        cout << "** construction objet B : " << n << " " << y << "\n";
    }
};

class C : public B, public A
{
    int n;
    int p;

public:
    // C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v) //question 1
    //C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : B(v) // question 2
    C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) // question 3
    {
        n = n3;
        p = n1 + n2;
        cout << "** construction objet C : " << n << " " << p << "\n";
    }
};

int main()
{
    C c1;
    C c2(10, 11, 12, 5.0);
    return 0;
}