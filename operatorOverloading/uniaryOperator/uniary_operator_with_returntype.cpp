#include <iostream>
using namespace std;

class Count
{
    int value;

public:
    //initializing count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix;
    Count operator++()
    {
        Count temp;
        temp.value = ++value;
        return temp;
    }
    // Overload ++ when used as postfix;
    Count operator++(int)
    {
        Count temp;
        temp.value = ++value;
        return temp;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{

    Count count, result;

    result = count++; // call the "void operator ++(int)" function
    result.display();

    result = ++count; // call the "void operator ++()" function
    result.display();
    return 0;
}