/*
    program to print patten of a string "apple" as follow
    a
    ap
    app
    appl
    apple
*/

#include <iostream>
using namespace std;
int main()
{
    char patten[20];
    int i, j;

    cout << "Enter a string: ";
    cin >> patten;

    for (i = 0; patten[i] != '\0'; i++)
    {
        for (j = 0; j <= i; j++)
            cout << patten[j];
        cout << "\n";
    }

 for(patten[i]!='\0';i >= 0; i--)
  {
    for(j=0;j<=i;j++)
    cout << patten[j -2];
    cout << "\n";
  }
    return 0;
}
