#include <iostream>
using namespace std;

int main(){
    int n, num, digit, rev = 0;

    cout << "Enter a postive number: "<< endl;
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num/10;
    } while (num != 0);
    
    if (n == rev)
    {
        cout << "It is a palindrome number" << endl;
    }
    else
    {
        cout << "It is not a palindrome number"<< endl ;
    }
    

    return 0;
}