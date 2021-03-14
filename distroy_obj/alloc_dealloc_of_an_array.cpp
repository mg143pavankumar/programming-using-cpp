// Allocation and deallocation of a momory for an array

#include <iostream>
using namespace std;

int main()
{

    int length, sum = 0;

    cout << "Enter number of students: ";
    cin >> length;

    // Allocating memory to the pointer of an array using new operator
    int *marks = new int[length];

    // initializing value for an array
    cout << "\nEnter marks of a student: ";
    for (int i = 0; i < length; i++)
    {
        cin >> *(marks + i);
    }

    for (int i = 0; i < length; i++)
    {
        sum = sum + *(marks + i);
    }

    cout << "\n\nSum = " << sum;

    // deallocating the memory using delete operator
    delete marks;

    return 0;
}