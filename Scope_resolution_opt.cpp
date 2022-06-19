#include<iostream>
using namespace std;
// so what is scope resoluatation  operator --> [::]
/*in c++ two consecutive colones is known as scope resolutation operator
---> in c we coluld access only local variable when local and globle variable variable has same name . there is no facility in c to access globle variable 
the scope resolution operator solve this problem */
/*
--------------------------
SYNTEX -> :: VARIBLE NAME |
--------------------------
*/
//EXAMPLE 
int x = 50;// GLOBLE VARIABLE X
int main(){
  int x = 40;
  cout<<"x local is = "<<x <<endl;
  cout<<" x globle is = "<<::x<<endl;
  return 0; 
}
 note -----------------------------------------------------------------------------------------------
  1> we cant specify two or more local or globle with the same name bcz identifier must be different  name 
  2>we cant create local and globle variable having same name bcz they tack diff-diff region/area of memory.
  3> there is no need of scope resolution opt , when local and globle variable/ operator has diff name. 