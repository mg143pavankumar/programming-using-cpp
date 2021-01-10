#include <iostream>
using namespace std;

class Area{
    protected:
        int length = 10, breath = 5;

};

class Rectange : public Area{
    public: 
        int rectangleArea(){
            return length * breath;
        }
};

int main(int argc, char const *argv[])
{
    Rectange rect;
    int area = rect.rectangleArea();
    cout << "Area: "<< area << endl;
    return 0;
}
