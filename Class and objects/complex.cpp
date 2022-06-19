//create complex class to enter three number and display it;
#include<iostream>
using namespace std;
class complex{
  private:
    int real, imag;
  public:
   void getno(int r, int im){
    real=r;
    imag=im;
   }
   void display(){
    cout <<real<<"+"<<imag<<"i"<<endl;
   }
};
int main(){
  complex cx;
  cx.getno(12,33);
  cx.display();
  complex cx2;
  cx2.getno(33,43);
  cx2.display();
  return 0;
}