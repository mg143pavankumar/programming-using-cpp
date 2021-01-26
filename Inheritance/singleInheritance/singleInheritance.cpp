// Program to explain single inheritance

#include <iostream>
using namespace std;

//base class
class Area
{
protected:
    int length = 10, breadth = 5;
};

// derived class inherites base class Area
class Rectange : public Area
{
public:
    int rectangleArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectange rect;
    int area = rect.rectangleArea();
    cout << "Area: " << area << endl;
    return 0;
}
