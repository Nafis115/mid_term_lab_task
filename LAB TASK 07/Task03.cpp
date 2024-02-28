#include <bits/stdc++.h>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    friend int distance(Point obj1, Point obj2);
};
int distance(Point obj1, Point obj2)
{
    int r = obj2.x - obj1.x;
    int r1 = obj2.y - obj1.y;
    int result = r * r + r1 * r1;
    result = sqrt(result);
    return result;
}
int main()
{
    cout << "Enter x, y"<<endl;
    int x, y;
    cin >> x >> y;
    Point p1(x, y);
    cout << "Enter x, y"<<endl;
    int x1, y1;
    cin >> x1 >> y1;
    Point p2(x1, y1);
    int result = distance(p1, p2);
    cout << result << endl;

    return 0;
}