#include <bits/stdc++.h>
using namespace std;
class Distance
{
private:
    int km;
    int me;
    int ce;

public:
    Distance()
    {
        km = 10;
        me = 15;
        ce = 14;
    }
    Distance(int k, int m, int c)
    { 
        km = k;
        me = m;
        ce = c;
    }

    Distance Sub(Distance obj1, Distance obj2)
    {

        int k = obj1.km - obj2.km;
        int m = obj1.me - obj2.me;
        int c = obj1.ce - obj2.ce;

        if (c < 0)
        {
            m--;
            c += 100;
        }
        if (m < 0)
        {
            k--;
            m += 1000;
        }
        Distance temp;
        temp.km = k;
        temp.me = m;
        temp.ce = c;
        return temp;
    }
    void show()
    {
        cout << km << " " << me << " " << ce << endl;
    }
};

int main()
{
    cout << "Enter the value of 1st object" << endl;
    int k, m, c;
    cin >> k >> m >> c;
    Distance d1(k, m, c);
    cout << "Enter the value of 1st object" << endl;
    int k1, m1, c1;
    cin >> k1 >> m1 >> c1;
    Distance d2(k1, m1, c1);
    Distance d3;
    d3 = d1.Sub(d1, d2);
    d3.show();
        return 0;
}