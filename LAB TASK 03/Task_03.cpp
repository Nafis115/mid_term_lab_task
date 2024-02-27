#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
  int real;
  int img;

public:
void set_data(int real, int img){
     this->real=real;
     this->img=img;
}
void get_data(){
     cout<<real<<" " <<img<<endl;
}

friend Complex sum(Complex obj1, Complex obj2);
~Complex(){

}
};
Complex sum(Complex obj1, Complex obj2){
     Complex temp;
     temp.real=obj1.real+obj2.real;
     temp.img=obj1.img+obj2.img;
     return temp;
}



int main(){

  Complex c1;
  c1.set_data(10,20);
  c1.get_data();
  Complex c2,c3;
  c2.set_data(30,40);
c3=sum(c1,c2);
c3.get_data();
cout<<"Destructed";
c3.~Complex();








     return 0;
}