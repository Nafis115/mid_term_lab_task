#include<bits/stdc++.h>
using namespace std;
class Height{
private:
int feet;
int inch;
public:
Height(){
    feet=5;
    inch=5;

}
Height(int f, int i){
    feet=f;
    inch=i;
}
void sub (Height obj1, Height obj2){
int f=obj1.feet-obj2.feet;
int i= obj1.inch-obj2.inch;
cout<<f<<" "<<i<<endl;

}

};
int main(){
cout<<"Enter 1st man height"<<endl;
int f, i;
cin>>f>>i;
Height h1(f,i);
cout<<"Enter 2nd man height"<<endl;
int f1, i1;
cin>>f1>>i1;
Height h2(f1,i1);
h2.sub(h1, h2);










     return 0;
}