/*Passing parameter/ argument from function call to  function definetion 
-----------------------------------------------
 |
 |
 |--------------> 1) call / pass by value -----C
                  2) call /pass by address ----C
                  3) call/ pass by reference ----------- C++

1) Call by value ---> we call function and pass original value 
  2) call by address---> in this type of passing scheme address is passing to
  3) call by referance in this scheme value is passed to function .in the argument .of function defination referance opt/alias opt is use.

  ---------------------------
  example
  ---------------------------
  call by value---------->
*/
  #include<iostream>
  using namespace std;
  void sum(int x, int y){
      int sum=0;
      sum = x+y;
      cout<<" sum is = "<<sum<<endl;
    }
  int main(){
    int a=12;
    int b=4;
    sum(a,b);
    return 0;
  }