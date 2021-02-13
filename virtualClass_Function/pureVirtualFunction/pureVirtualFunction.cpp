#include <iostream>
using namespace std;

// Abstract class
class Shape
{
protected:
    float dimension;

public:
    void getDimension()
    {
        cin >> dimension;
    }

    //Pure vitual function in base class always equal to zero
    virtual float calculateArea() = 0;
};

//derived class
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};

// derived class
class Circlr : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};

int main()
{
    Square square;
    Circlr circle;

    cout << "Enter the side of the square: ";
    square.getDimension();
    cout << "\nArea of Square: " << square.calculateArea();

    cout << "\n\nEnter the radius of circle: ";
    circle.getDimension();
    cout << "\nArea of Circle: " << circle.calculateArea();
    return 0;
}