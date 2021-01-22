/*
    cin  ---> used to read the data from user
    cout ---> used to display the data to the user

*/

#include <iostream>
using namespace std;

int main(){
    int p, r, y;
    double SI;

    cout << "Enter principal, rate and year: ";
    cin >> p >> r >> y;

    SI = (p * r * y)/100;

    cout << "\nSimple Interest SI = " << SI;

    return 0;
}