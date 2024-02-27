#include<bits/stdc++.h>
using namespace std;
class Person
{
  private:
string name;
int age;

public:
void set_name_age(string n,int a){
name=n;
age=a;
}

void get_name_age(){
     cout<<name<<" "<<age<<endl;
}



};
int main(){
 string name;
 int age;
 cin>>name>>age;
 Person n;
n.set_name_age(name, age);
n.get_name_age();


   





     return 0;
}





