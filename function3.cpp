#include<iostream>
using namespace std;
// call by address
void swap(int *p , int *q){
  int temp; 
  temp = *p;
  *p= *q;
  *q= temp;
  cout<<" after swap the value is "<<*p<<" "<<*q<<endl;
}
int main(){
  int a,b;
  cout<<" Enter two number ";
  cin>>a>>b;
   cout<<" befor swap the value is "<<a<<" "<<b<<endl;
  swap(&b, &b);
   
   return 0;
}

------------------------
CALL BY ADDRESS 
-----------------------