#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int id;
    double cgpa;

public:
Student(){
    name=" ";
    id=0;
    cgpa=0;
}
    Student(string name, int id, double cgpa)
    {
        this->name = name;
        this->id = id;
        this->cgpa = cgpa;
    }
    int cg(){
        return cgpa;
    }
    void display(){
        cout<<name<<" "<<id<<" "<<cgpa<<endl;
    }
};
int main()
{
    cout<<"How many students you enter"<<endl;
    int n;
    cin>>n;

    Student s[n];
    for (int  i = 0; i < n; i++)
    {
        string name;
        int id;
        double cgp;
        cin>>name>>id>>cgp;
        s[i]= Student(name,id,cgp);

    }

     for (int  i = 0; i < n; i++)
     {
        if(s[i].cg()<2.00){
            s[i].display();
        }
     }
     


    return 0;
}