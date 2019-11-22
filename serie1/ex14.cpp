#include <iostream>
#include <string>
using namespace std;

class Car
{
    int model;
    string name;
    float distance;

public:
    Car();
    ~Car()
    {
        cout << "D\n";
    };

    void print();
};

Car::Car()
{
    cout << "C";
};

void Car::print()
{
    cout << "";
};

int main()
{
    Car *c2 = new Car;
}
