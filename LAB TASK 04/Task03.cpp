#include <bits/stdc++.h>
using namespace std;
class Y;
class X
{
private:
    int data1;
    int data2;

public:
    void set(int data1, int data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }

    void get()
    {
        cout << data1 << " " << data2 << endl;
    }
    friend int sum(X obj1, Y obj2);
   friend void exchange(X &obj1, Y &obj2);
};
class Y
{
private:
    int data1;
    int data2;

public:
    void set(int data1, int data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }

    void get()
    {
        cout << data1 << " " << data2 << endl;
    }
    friend int sum(X obj1, Y obj2);
    friend void exchange(X &obj1, Y &obj2);
};

int sum(X obj1, Y obj2)
{

    int result=0;
     result = obj1.data1 + obj2.data2;
cout<<result<<endl;
    return result;
}

void exchange(X& obj1, Y& obj2)
{
     X temp;
    temp.data1 = obj1.data1;
    obj2.data2=temp.data1;
   


}

int main()
{
    X x1;
    Y y1;
    cout << "Enter the value of x1:" << endl;
    cout << "Enter the value of data1: ";
    int d1, d2;
    cin >> d1;
    cout << "Enter the value of data2: ";
    cin >> d2;
    x1.set(d1, d2);
    cout << "Enter the value of y1:" << endl;
    cout << "Enter the value of data1: ";
    int d11, d22;
    cin >> d11;
    cout << "Enter the value of data2: ";
    cin >> d22;
    y1.set(d11, d22);
    int result = sum(x1, y1);
    cout << "The result of sum is : ";
    cout << result << endl;
    cout << "Before the exchange: " << endl;
    cout << "The value of x1 object: ";
    x1.get();
    cout << "The value of y1 object: ";
    y1.get();
    cout << "After the exchanger: " << endl;
    exchange(x1, y1);

    cout << "The value of x1 object: ";
    x1.get();
    cout << "The value of y1 object: ";
    y1.get();

    return 0;
}