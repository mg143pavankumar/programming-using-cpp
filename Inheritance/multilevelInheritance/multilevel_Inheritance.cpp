// Program to explain multilevel inheritance

#include <iostream>
using namespace std;

// Base class (parent)
class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

// Derived class (child)
class MyChild : public MyClass
{
public:
    void mychild()
    {
        cout << "Some content in mychild class" << endl;
    }
};

// Derived class (grandchild)
class MyGrandChild : public MyChild
{
};

int main()
{
    MyChild myobj1;
    myobj1.myFunction();
    myobj1.mychild();

    MyGrandChild myobj;
    myobj.mychild();
    myobj.myFunction();

    return 0;
}