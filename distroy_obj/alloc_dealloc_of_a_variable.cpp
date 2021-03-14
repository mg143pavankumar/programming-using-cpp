// Allocation and deallocation of a momory for a variable

#include <iostream>
using namespace std;

int main()
{

    // initially making pointer to NULL
    int *num = NULL;

    // Allocating memory to the pointer using new operator
    num = new int;

    // initializing pointer to value
    *num = 10;

    cout << "num = " << *num;

    // deallocating the memory using delete operator
    delete num;

    // After deallocating the memory pointer will become null;
    cout << "\nnum = " << *num;

    return 0;
}