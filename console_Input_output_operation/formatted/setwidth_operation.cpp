/*
    setw(int);
    Function setw sets the field width or the number of characters to be 
    used for outputting numbers.

    setfill(char ch);
    setfill sets c as the new fill character for the stream.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char ch;
    int w;

    cout << "Enter width of the charactor: ";
    cin >> w;

    cout << "\nEnter a charactor: ";
    cin >> ch;

    cout << setfill (ch) << setw (w);
    cout <<" Hello world "<< endl;
 
    return 0;
}