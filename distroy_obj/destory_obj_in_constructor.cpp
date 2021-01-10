#include <iostream>
using namespace std;

class Base{
    public:
        Base(int *p){
            cout << "Initilalized p = "<< *p << endl;
            delete(this);
        }

        ~Base(){
            cout << "Destructor" << endl;
        }

};

int main(int argc, char const *argv[])
{
    int a = 10;
    Base *p = new Base(&a);

    return 0;
}
