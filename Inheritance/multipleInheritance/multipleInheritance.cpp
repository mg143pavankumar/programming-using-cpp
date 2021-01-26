// Program to explain multiple inheritance using C++

#include <iostream>
using namespace std;

// Base class
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

// Another base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class." << endl;
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    MyChildClass mch;
    mch.myFunction();
    mch.myOtherFunction();
    return 0;
}