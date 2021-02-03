#include <iostream>
#define PIE 3.14
using namespace std;

class Area
{
    double area;

public:
    double findArea(double radius)
    {
        this->area = 4 * PIE * radius * radius;
        return this->area;
    }

    double findArea(double length, double width, double height)
    {
        this->area = length * height * width;
        return this->area;
    }

    double findArea(double length, double width)
    {
        this->area = (length * width) / 2;
        return this->area;
    }

    void displayArea(string shapeName)
    {
        cout << "Area of " << shapeName << " is " << area << "\n\n";
    }
};

int main()
{

    Area area;

    area.findArea(5);
    area.displayArea("Sphere");

    area.findArea(4, 5, 6);
    area.displayArea("Rectangle");

    area.findArea(4, 6);
    area.displayArea("Triangle");
    return 0;
}