#include<bits/stdc++.h>
using namespace std;
class Product{
    private:
    string name;
    int quantity;
    int price;
    public:
    Product(){
        name="book";
        quantity=0;
        price=0;
    }
    Product(string name, int quantity, int price){
        this->name=name;
        this->quantity=quantity;
        this->price=price;

    }

int  cost(){
  
    return quantity*price;
}



};


int main(){
  cout<<"How many product you buys"<<endl;
  int n;
  cin>>n;
Product *arr=new Product[n];
for (int  i = 0; i <n; i++)
{  cout<<"Enter name"<<endl;
    string na;
    cin>>na;
    cout<<"Enter quantity: "<<endl;
    int q;
    cin>>q;
    cout<<"Enter your price:"<<endl;
    int p;
    cin>>p;
    arr[i]= Product(na,q,p);
   
}

int sum=0;
for (int  i = 0; i <n; i++)
{
  int cost=arr[i].cost();
  sum+=cost;
}

cout<<"Your total cost is"<<endl;
cout<<sum<<endl;
  









     return 0;
}