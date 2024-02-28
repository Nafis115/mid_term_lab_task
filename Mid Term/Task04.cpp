#include <bits/stdc++.h>
using namespace std;
class Kkfc
{
private:
    string a;
    string b;
    string c;
    string d;
    string e;

public:
    int n;
    void chossefood(string a, string b, string c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        n = 3;
    }
    void chossefood(string a, string b, string c, string d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        n = 4;
    }
    void chossefood(string a, string b, string c, string d, string e)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        n = 5;
    }

    void display()
    {
        if (n == 3)

        {
            cout<<"Your orders foods item: "<<endl;
            cout << a << " " << b << " " << c << endl;
        }
        if (n == 4)
        {cout<<"Your orders foods item: "<<endl;
            cout << a << " " << b << " " << c << endl;
        }
        if (n == 5)
        {cout<<"Your orders foods item: "<<endl;
            cout << a << " " << b << " " << c << endl;
        }
    }
};

int main()
{

    Kkfc k1, k2, k3;
    cout << "You must order at least 3 foods" << endl;
    cout << "Enter how many food you order " << endl;
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "Enter your food items" << endl;
        string a, b, c;
        cin >> a >> b >> c;
        k1.chossefood(a,b,c);
        k1.display();
    }
    else if (n == 4)
    {
        cout << "Enter your food items" << endl;
        string a, b, c, d;
        cin >> a >> b >> c >> d;
        k1.chossefood(a,b,c,d);
        k1.display();
    }
    else
    {
        cout << "Enter your food items" << endl;
        string a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        k1.chossefood(a,b,c,d,e);
        k1.display();
    }

    return 0;
}