/*
new-->
      it is a keyword which is known as operator in c++.
      this operator is use to allocate memory in heap area and return the address of created memory  area.
      int *p;---> this is pointer variable that can hold the address of another varible of d=same data type 
      p= new int // allocated 4 byte of space in memory dynamecally 
                  // and return the base address of allocated space 

                  ex---->
                  float *ft;
                  ft = new float;

Delete -> is is a keyword but here we use as a operator , this operator is use to deallocate space which is created dynamically by using new \

*/
#include<iostream>
using namespace std;
 int main(){

  int *x, *y,*z;
  x= new int ;
  y = new int ;
  z = new int ;
  cout<<"enter two number "<<endl;
  cin>> *x>>*y;
  *z = *x +*y;
  cout<<" sum is "<<*z<<endl;
 // delete x,y,z;
  delete x;
   cout<<&*x;
  // cout<<*y;
  // cout<<*z;
  return 0;
 }