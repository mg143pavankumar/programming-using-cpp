
// Write a C++ program to perform read and write operation on a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char text[200];
    fstream file;

    file.open("readAndWrite.txt", ios::out | ios::in);
    cout << "Write text to be written on file." << endl;
    cin.getline(text, sizeof(text));

    // Writing on file
    file << text << endl;

    // Reding from file
    file >> text;
    cout << text << endl;

    //closing the file
    file.close();
    return 0;
}
