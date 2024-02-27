#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
void set_function(string name, int age){
    this->name=name;
    this->age=age;
}
    void display()
    {
        cout << name << " " << age << endl;
    }

};
int main()
{
    Person p[4];
    Person *pt;
    pt=p; // initialize  the address to the pt pointer
    for (int  i = 0; i < 4; i++)
    {
    cout<<"Enter your name: ";
    string name;
    cin>>name;
    cout<<"Enter your age: ";
    int age;
    cin>>age;
    (*pt).set_function(name, age);
    pt++;

    }
    pt=p; //again initialize to get the value
    for (int i = 0; i < 4; i++)
    {
        (*pt).display();
        pt++;
    }
    
    

    return 0;
}