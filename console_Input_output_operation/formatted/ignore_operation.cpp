/*
    cin.ignore()  -->  function is used which is used to ignore or clear
     one or more characters from the input buffer.

*/

#include <iostream>
using namespace std;

int main(){

    char name[20];

    cout << "Enter your name: ";
    cin.ignore(3); // ignoring 3 charactors from your input
    cin >> name;

    cout << "\nYour name is : " << name;
    return 0;
}