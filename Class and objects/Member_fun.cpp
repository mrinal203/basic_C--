// member function --
  // we can define memn=ber function either inside of class or outside of class 
  //lets see with an example 
  #include<iostream>
  using namespace std;


  class demo{
     private:
       int x, y,z;
       public:
       void input(int, int ,int);
       void display(){
        cout<<" x is "<<x<<endl;
        cout<<" y is "<<y <<endl;
        cout<<"z is"<<z<<endl;
       }

  };
  void demo::input(int a, int b, int c){
    x=a;y=b;z=c;
  }
  int main(){

    demo d;
    d.input(12,4,3);
    d.display();
    return 0;
  }