#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int i, int j)
    {
        feet = i;
        inch = j;
    }

    Distance operator++();

    void show();
};

Distance Distance::operator++()
{
    feet++;
    inch++;
    return *this;
}

void Distance::show()
{
    cout << feet << "'";
    cout << inch;
}

int main()
{
    Distance a(1, 2);

    cout << "Original value of a: ";
    a.show();

    ++a;
    cout << "\nValue after ++a: ";
    a.show();

    return 0;
}