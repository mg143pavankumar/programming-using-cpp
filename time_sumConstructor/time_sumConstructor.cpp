//Write a C++ program that takes two values of time (hr, min, sec) and output their sum using constructor.

#include <iostream>
#include <conio.h>
using namespace std;

class Time
{
public:
    Time(){};
    Time(int nhr, int nmin, int nsec) : hr(nhr), min(nmin), sec(nsec){};
    ~Time(){};

    int GetHour() { return hr; };
    int GetMin() { return min; };
    int GetSec() { return sec; };
    void SetHour(int nHour) { hr = nHour; };
    void SetMin(int nMin) { min = nMin; };
    void SetSec(int nSec) { sec = nSec; };
    Time operator+(Time &ntime) const
    {
        int nSec = 0;
        int nMin = 0;
        int nHour = 0;
        if (sec + ntime.GetSec() < 60)
            nSec = sec + ntime.GetSec();
        else
        {
            nSec = sec + ntime.GetSec() - 60;
            nMin++;
        }
        if (min + ntime.GetMin() < 60)
            nMin += min + ntime.GetMin();
        else
        {
            nMin += min + ntime.GetMin() - 60;
            nHour++;
        }
        if (hr + ntime.GetHour() < 24)
            nHour += hr + ntime.GetHour();

        else
            nHour += hr + ntime.GetHour() - 24;
        return Time(nHour, nMin, nSec);
    };

private:
    int hr;
    int min;
    int sec;
};

int main()
{
    int hr1, min1, sec1;
    int hr2, min2, sec2;

    cout << "Enter the hours of the first value :";
    cin >> hr1;

    cout << "Enter the minutes of the first value :";
    cin >> min1;

    cout << "Enter the seconds of the first value :";
    cin >> sec1;

    cout << "Enter the hours of the second value :";
    cin >> hr2;

    cout << "Enter the minutes of the second value :";
    cin >> min2;

    cout << "Enter the seconds of the second value :";
    cin >> sec2;

    Time t1(hr1, min1, sec1);
    Time t2(hr2, min2, sec2);

    Time t3;

    t3 = t1 + t2;
    cout << "Sum of values is : " << t3.GetHour() << ":" << t3.GetMin() << ":" << t3.GetSec() << endl;

    return 0;
}