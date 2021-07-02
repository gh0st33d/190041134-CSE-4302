#include <bits/stdc++.h>
using namespace std;
class Time
{
    private:
    int hour,minute,second;

    public:
         int hours() {
        return hour;
    }
    int minutes() {
        return minute;
    }
    int seconds() {
        return second;
    }

    void reset(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void advance(int h, int m, int s){
        second= second+s;
        if(second>59){
            minute=minute+ second/60;
            second= second%60;
        }

        minute=minute+m;
        if(minute>59){
            hour=hour+minute/60;
            minute=minute%60;
        }

        hour=hour+h;
        if(hour>23)
            hour=hour%24;
    }

    void print()
    {
        cout << "Current time is " << hour << ":" << minute << ":" << second << '\n';
    }
};

int main() {

    Time t;
    t.reset(12, 13, 14);
    t.print();

    t.advance(10, 15, 46);
    t.print();

}
