#include<bits/stdc++.h>
using namespace std;
class Square{
     private:

double side;
public:
Square(double side){
     this->side=side;
}
void display(){
     cout<<side<<endl;
}
Square(Square&obj){
     side=obj.side;
}
};
int main(){
Square s(30);
s.display();
Square s1(s);
s1.display();
  









     return 0;
}