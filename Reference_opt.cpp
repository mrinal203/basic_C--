#include<iostream>
using namespace std;

/* REFERANCE OPT ?

  IT IS USE TO PROVIDE ALIAS NAME / NICK NAME TO VARIABLE 'ALIAS' NAME MUST BE INITIALISED WITH OLD NAME/ ORIGNAL NAME ( AT THE TIME OF DECLARATION)
  -----------------------
  SYNTEX -> DATATYPE & ALIAS_NAME = OLD_NAME (OLD VARIABLE);
  -------------------

  --------
  EXAMPLE  INT X =50;
           INT &Y =X; // Y IS ALIAS OF X
           INT Z=X;// Z IS NOT ALIAS OF X

  -------
  EXAMPLE OF REFERANCE OPERATOR
  -------------------------------------
  */
 int main(){

   int x =45;
   int &y =x;
   cout<<x<<endl;
   cout<<y<<endl;
  return 0;
 }
 
