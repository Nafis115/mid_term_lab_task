#include<bits/stdc++.h>
using namespace std;
int main(){

  int arr[5];
  for (int  i = 0; i < 5; i++)
  {
   cin>>arr[i];
  }
  
 int *p;
 p=arr; //assign the address of arr into p
 for (int i = 0; i < 5; i++)
 {
  cout<<(*p)<<endl;
  p++;
 }










     return 0;
}