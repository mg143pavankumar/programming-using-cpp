#include <iostream>
using namespace std;

class Home{
    public: 
        // create a constructor
        Home(){
            cout<< "Constructor: Home" << endl;
        }

        // Create a destructor using ~ symbol
        ~Home(){
            cout << "Destructor: Home" << endl;
        }

};

class Rooms : Home{
    public: 
        // create a constructor
        Rooms(){
            cout<< "Constructor: Rooms" << endl;
        }

        // Create a destructor using ~ symbol
        ~Rooms(){
            cout << "Destructor: Rooms" << endl;
        }
};


int main(){
    Rooms r;
    return 0;
}