//Program to count number of objects using static member function
#include<iostream>
using namespace std;

class Demo{
    int noObj;
    static int objCount;
    public:
        Demo(){
            noObj = objCount++;
        }

        ~Demo(){
            --objCount;
        }

        void printNumberOfObj(){
            cout << "Object number = "<< noObj << "\n";
        }

        //Static member function definiation
        static void printObjCount(){
            cout << "Count  = " << objCount << "\n";
        }

};

//initialization of static variable
int Demo::objCount = 0;

int main(){
    Demo d1, d2;

    //calling static member function
    Demo::printObjCount();

    Demo d3;
    Demo::printObjCount();

    d1.printNumberOfObj();
    d2.printNumberOfObj();
    d3.printNumberOfObj();

    return 0;
}