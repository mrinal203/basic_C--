#include<iostream>
using namespace std;
void swap(int &x, int &y){
     int t;
     t=x;
     x=y;
     y=t;
    // return (x , y);
}

int main(){
  int a,b;
  cout<<"ENTER TWO NUMBERS::"<<endl;
  cin>>a>>b;
  cout<<" Befor swap the value of "<<" a is "<<a<<" "<<" b is "<<b<<endl;
  swap(a,b); // call by referance:::::::::::::::::::::::::::::::::
cout<<" after swap the value is "<<endl;

cout<<" a is "<<a<<" "<<" b is "<<b<<endl;
return 0;
}