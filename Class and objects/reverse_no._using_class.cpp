#include<iostream>
using namespace std;
 class rev{
  int num;
  public:
    void get_number(int num){
      this->num = num;

    }
    void display(){
      cout<<" you have given nnumber "<<num<<endl;

    }
    void calculate(){
      int r,revs=0;
      while(num>0){
        r =num%10;
        revs = revs*10+r;
        
      }
      cout<<" reverse number is "<<revs<<endl;
    }
 };
 int main(){
  rev obj;
  obj.get_number(1234);
  obj.display();
  obj.calculate();
  cout<<"---------------------------------------"<<endl;
  obj.get_number(45639);
  obj.display();
  obj.calculate();
  cout<<"---------------------------------------"<<endl;
  return 0;
 }