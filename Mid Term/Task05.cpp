#include <bits/stdc++.h>
using namespace std;
int area(int radius)
{
    return radius * radius;
}
int area(int length, int width)
{
    return length * width;
}
int area(double base, double height)
{
    return (base * height) / 2;
}
int main()
{

    int radius;
    int lenght, width;
    double base, height;
    cin >> radius;
    int r1 = area(radius);
    cout << r1 << endl;
    cin >> lenght >> width;
    int r2 = area(lenght, width);
    cout << r2 << endl;
    cin >> base >> height;
    int r3 = area(base, height);
    cout << r3 << endl;

    return 0;
}