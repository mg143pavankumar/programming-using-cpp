// C++ program to overload the binary operator using +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    // initilizing real and img value to 0 using constructor
    Complex() : real(0), img(0) {}

    void input()
    {
        cout << "Enter real and imaginary parts of complex number" << endl;
        cin >> real;
        cin >> img;
    }

    // Overloading the + operator
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;

        return temp;
    }

    void output()
    {
        if (img < 0)
        {
            cout << "Output: " << real << img << "i";
        }
        else
        {
            cout << "Output: " << real << "+" << img << "i";
        }
    }
};

int main()
{
    Complex complex1, complex2, result;

    cout << "Enter first complex number" << endl;
    complex1.input();

    cout << "Enter second complex number" << endl;
    complex2.input();

    result = complex1 + complex2;
    result.output();
}