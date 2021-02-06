#include <iostream>
using namespace std;

void demo() throw(int, double)
{
    int a = 2;

    if (a == 1)
        throw a; //throwing integer exception

    else if (a == 2)
        throw 'A'; //throwing character exception

    else if (a == 3)
        throw 4.5; //throwing float exception
}

int main()
{

    try
    {
        demo();
    }
    catch (int n)
    {
        cout << "\nException caught.";
    }

    cout << "\nEnd of program.";

    return 0;
}