/*
    	Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritance.
*/

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        a = 10;
    }
};

class B : virtual public A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    cout << "a = " << obj.a << endl;

    return 0;
}