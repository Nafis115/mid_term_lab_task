#include <bits/stdc++.h>
using namespace std;
class Time
{
private:
    int year, month, day;

public:
    Time()
    {
        year = 0;
        month = 0;
        day = 0;
    }
    Time(int year, int month, int day)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void display()
    {
        cout << day << " " << month << " " << year << endl;
    }
    Time sub(Time obj1, Time obj2)
    {
        Time temp;
        int d = obj1.day - obj2.day;
        int m = obj1.month - obj2.month;
        int y = obj1.year - obj2.year;
        if (d < 0)
        {
            m--;
            d += 30;
        }
        if (m < 0)
        {
            y--;
            m += 12;
        }
        temp.day = d;
        temp.month = m;
        temp.year = y;
        return temp;
    }
};
int main()
{
    cout << "Enter day, month, year" << endl;
    int d, m, y;
    cin >> d;

    cin >> m;

    cin >> y;

    Time t1(d, m, y);
    cout << "Enter day, month, year" << endl;
    int d1, m1, y1;
    cin >> d1;

    cin >> m1;

    cin >> y1;

    Time t2(d1, m1, y1);

    Time t3;
    t3 = t2.sub(t1, t2);
    t3.display();

    return 0;
}