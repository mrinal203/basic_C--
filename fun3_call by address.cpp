#include<iostream>>
using namespace std;
// call by address
int swap(int *p , int *q){
  int temp; 
  temp = *p;
  *p= *q;
  *q= temp;
}
int main(){
  int a,b;
  cout<<" Enter two number ";
  cin>>a>>b;
   cout<<" befor swap the value is "<<a<<" "<<b<<endl;
  swap(&b, &b);
   cout<<" after swap the value is "<<a<<" "<<b<<endl;
   return 0;
}