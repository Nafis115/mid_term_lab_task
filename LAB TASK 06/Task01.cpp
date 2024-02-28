#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    int height;
    int width;
    public:
    void set_data(int height, int widht){
        this->height=height;
        this->width=widht;
    }
    void get_data(){
        cout<<height<<" "<<width<<endl;
    }


};
int main(){
cout<<"Enter the size how many  rectangle you want"<<endl;
int n;
cin>>n;

  Rectangle r1[n];
  for (int  i = 0; i < n; i++)
  {
  int height;
  int width;
  cin>>height>>width;
  r1[i].set_data(height, width);
  }
  
  for (int  i = 0; i <n; i++)
  {
   r1[i].get_data();
  }
  








     return 0;
}