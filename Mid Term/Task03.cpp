#include<bits/stdc++.h>
using namespace std;
class Product{
private:
string name;
int price;
int code;
public:
Product(){
    name=" ";
    price=0;
    code= 0;

}
Product(string name, int price, int code){
    this->name=name;
    this->price=price;
    this->code=code;
}
int pric(){
    return price;

}


};
int main(){
cout<<"How many product you want you buys"<<endl;
int n;
cin>>n;
  Product p[n];

for (int  i = 0; i <n; i++)
{
    string name;
    int price;
    int code;
    cin>>name>>price>>code;
  p[i]=Product(name, price, code);


}
int sum=0;
for (int  i = 0; i <n; i++)
{
  sum+=p[i].pric();
}

int avg=sum/n;

cout<<avg<<endl;







     return 0;
}