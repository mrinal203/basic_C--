call by value 

#include<iostream>
using namespace std;
void swap(int x, int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
  cout<<" After swap the value is "<<"a is"<<x<<" "<<" b is "<<y<<endl;
  
  
}
int main(){
  cout<<"Enter two number "<<endl;
  int a,b;
  cin>>a>>b;
  cout<<" befor swap the value is "<<a<<" "<<b<<endl;
  swap(a,b);
 // cout<<" After swap the value is "<<a<<" "<<b<<endl;
  return 0;
  
}