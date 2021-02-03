#include <iostream>
using namespace std;

class Count
{
    int value;

public:
    //initializing count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix;
    void operator++()
    {
        ++value;
    }
    // Overload ++ when used as postfix;
    void operator++(int)
    {
        ++value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{

    Count count;

    count++; // call the "void operator ++(int)" function
    count.display();

    ++count; // call the "void operator ++()" function
    count.display();
    return 0;
}