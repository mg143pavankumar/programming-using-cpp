#include <iostream>
using namespace std;

class Sample{
    float a, b;
    public:
        void setValue(){
            a = 10;
            b = 20;
        }

        friend float avg(Sample s);
};

float avg(Sample s){
    return float(s.a + s.b)/2;
}

int main(){
    Sample s;
    s.setValue();

    cout << "Avg: " << avg(s) << endl;
    return 0;
}