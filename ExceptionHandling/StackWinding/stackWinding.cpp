#include <iostream>
using namespace std;

void f1() throw(int)
{
    cout << "\nf1() function started";
    throw 100;
    cout << "\nf1() function ended";
}

void f2() throw(int)
{
    cout << "\nf2() function started";
    f1();
    cout << "\nf2() function ended";
}

void f3()
{
    cout << "\nf3() function started";

    try
    {
        f2();
    }
    catch (int i)
    {
        cout << "\nCaught exception " << i;
    }

    cout << "\nf3() function ended";
}

int main()
{

    f3();

    return 0;
}