#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
     string name;
     int contact;
     int salary;

public:
     Employee()
     {
          name = " ";
          contact = 0;
          salary = 0;
     }
     Employee(string name, int contact, int salary)
     {
          this->name = name;
          this->contact = contact;
          this->salary = salary;
     }
     int salar()
     {
          return salary;
     }

     void display()
     {

          cout << name << " " << contact << " " << salary << endl;
     }
};
int main()
{
     cout << "Enter employee numbers" << endl;
     int n;
     cin >> n;
     Employee e[n];
     cout << "Enter employee information" << endl;
     for (int i = 0; i < n; i++)
     {
          string name;
          int contact;
          int salary;
          cin >> name >> contact >> salary;
          e[i] = Employee(name, contact, salary);
     }
     int index;
     for (int i = 0; i < n; i++)
     {
          if (e[i].salar() >= e[index].salar())
          {
               index = i;
          }
     }
     e[index].display();

     return 0;
}