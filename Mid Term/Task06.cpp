#include<bits/stdc++.h>
using namespace std;
class Height{
    double foot, inchi;
    public:
    Height(){
        foot=0;
        inchi=0;
    }
    Height(double foot, double inchi){
        this->foot=foot;
        this->inchi=inchi;
    }

Height sub(Height obj1, Height obj2){
    int f=obj1.foot-obj2.foot;
    int i=obj1.inchi-obj2.inchi;
    if(i<0){
        i+=12;
        f--;
    }
    Height temp;
    temp.foot=f;
    temp.inchi=i;
    return temp;
}

void display(){
    cout<<foot<<" "<<inchi<<endl;
}

};
int main(){
int f, i;
cin>>f>>i;

  Height h1(f,i);
int f1, i1;
cin>>f1>>i1;

  Height h2(f1,i1);
  Height h3;
  h3=h1.sub(h1,h2);
  h3.display();










     return 0;
}