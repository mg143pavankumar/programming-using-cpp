//Accessing members functions of a class using pointer

#include <iostream>
using namespace std;

class Main{
    public:
        int a, b;
        int add(int a, int b){
            return a + b;
        }

};

int main(){ 

    //creating pointer obj
    Main *ptr , n;
    ptr = &n; //asigning address of obj n in ptr

    //accessing member function using arrow operator
    ptr -> a = 10;
    ptr -> b = 20;
     
    cout << "Sum  = " << ptr -> add(ptr -> a, ptr -> b);




    return 0;
}