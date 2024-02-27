#include<bits/stdc++.h>
using namespace std;
class Rectangle{
     private:
int length, width;
public:
Rectangle(int l, int w){
     length=l;
     width=w;

}
Rectangle(){
length =10;
width=20;
cout<<length*width<<endl;
}
void area(){
     int result=length*width;
     cout<<result<<endl;

}
};
int main(){

 int l,w;
 cin>>l>>w;
 Rectangle r1;
Rectangle r2(l,w);





     return 0;
}





