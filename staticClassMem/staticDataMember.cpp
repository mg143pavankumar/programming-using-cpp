#include <iostream>
using namespace std;

class Box{

    public:
        static int objcount;
        Box(){
            cout << "Constructor is called!! "<< endl;
            objcount++;
        }
};

int Box:: objcount = 0;

int main(int argc, char const *argv[])
{
    Box box1;
    Box box2;
    Box box3;

    cout << "Number of object created: "<< Box::objcount << endl;
    return 0;
}

