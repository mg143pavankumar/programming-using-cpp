#include <iostream>
using namespace std;

int main()
{

    int p;
    cout << "Before a bad input operation: \n"
         << "cin.eof " << cin.eof()
         << "\ncin.fail " << cin.fail()
         << "\ncin.bad " << cin.bad()
         << "\ncin.good " << cin.good();

    cout << "\nEnter a character (should be integer)" << endl;
    cin >> p;
    cout << "After a bad input operation: \n"
         << "cin.eof " << cin.eof()
         << "\ncin.fail " << cin.fail()
         << "\ncin.bad " << cin.bad()
         << "\ncin.good " << cin.good();

    cin.clear();
    cout << "\nAfter cin.clear() function" << endl;
    cout << "cin.fail = " << cin.fail();

    return 0;
}