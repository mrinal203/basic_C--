/*
a function defination  which have started with inline keyword is called inline function
inline function expend in line where it calls/invokes .
it mw=ean where inline() replace the body at the place of function call.

*/
// programm to find the squear of two numbers
#include<iostream>
using namespace std;
inline int  squear(int n){
  int result = n*n;
}
 int main(){
    int num;
    cout<<"enter a number :"<<endl;
    cin>>num;
    int Result = squear(num);
    cout<<Result <<" this is squeare od=f the number "<<endl;
    return 0;
 }

There is som situation where inline function does not work

1>  if inline is recursiv 
2>  if inline () contain static variable 
3>  if return section  is mention but oour function does t=not return any value 
4>  if the body of inline contain loop ,switch , goto .

