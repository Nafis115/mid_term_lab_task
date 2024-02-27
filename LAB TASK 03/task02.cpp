#include<bits/stdc++.h>
using namespace std;
class Book
{
private:
string title;
string author;
int year;

public:
 Book(){
     title="A fairy tale";
     author="Nafiz Iqbal";
     year=2023;
 }

 void display(){
     cout<<title<<" "<<author<<" "<<year<<endl;
 }
~Book(){

}
};


int main(){
Book b;
b.display();
cout<<"destruction";
b.~Book();









     return 0;
}