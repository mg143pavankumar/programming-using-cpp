/*
    getline(char* arr, int size) 
      ==> Reads a line of characters, 
    entered by the user at the console which ends with a newline character 
    or until the size of .

    write(char *arr, int num)
      ==> Writes a number of characters in a 
    char array to the console.

*/

#include <iostream>
using namespace std;

int main(){
    char studentName[20];
    cout << "Enter student name: ";
    cin.getline(studentName, 20);

    cout << "Name: ";
    cout.write(studentName,10);
    return 0;
}