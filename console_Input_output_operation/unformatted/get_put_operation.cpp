/*
get()  =>   Reads a single character from the user at the console and 
assigns it to the char array in its argument,
but needs an Enter key to be pressed at the end..

put()  => Writes a single character at the console.

*/

#include <iostream>
using namespace std;

int main(){
    char section;
    cout << "Enter the section you belong " << endl;
    section = cin.get();

    cout << "You belong to CSE - ";
    cout.put(section);
    return 0;
}
