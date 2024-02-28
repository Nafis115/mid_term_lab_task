#include <bits/stdc++.h>
using namespace std;
class Temperature
{
private:
    int celcius;
    int farenheit;

public:
    void setter(int celcius, int farenheit)
    {
        this->celcius = celcius;
        this->farenheit = farenheit;
    }

    void getter()
    {
        cout << celcius << " " << farenheit << endl;
    }

    int c_to_f(Temperature obj1)
    {

        int far = (obj1.celcius * 1.8) + 32;
        return far;
    }
    int f_to_c(Temperature obj1)
    {

        int cel = (obj1.farenheit - 32) * 0.55;
        return cel;
    }
};
int main()
{

    Temperature t;
    cout << "Enter your temperature in celcius" << endl;
    int ce;
    cin >> ce;
    cout << "Enter your temperature in farenheit" << endl;
    int fa;
    cin >> fa;
    t.setter(ce,fa);
    cout << "Befor conversiton" << endl;
    t.getter();

    cout << "After conversion farenheit to celcius" << endl;
    cout << "Your temperature in celcius" << endl;
    int r = t.c_to_f(t);
    cout << r << endl;
    cout << "After conversion  celcius to farenheit" << endl;
    cout << "Your temperature in farenheit" << endl;
    int r1 = t.f_to_c(t);
    cout << r1 << endl;

    return 0;
}