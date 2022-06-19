/*class 
it is a usear define data type , similar to structure that contain basically two type of member & three access specifier 
the two member are known as data member and member function while the three access specifier of class are private , public , protected;

object --> the instance of class or the variable of  type class 
// program to explain the example of class */
#include<iostream>
using namespace std;
class mrinal{
  private:
    int age;
    int salery;
    string name;
    public:
      void get_data(int age , int sal, string nam){
       this->age  =age;
        salery = sal;
        name = nam;
      }
      void put_data(){
         cout<<" name is "<<name<<endl;
         cout<<" age is "<< age<<endl;
         cout<<"salaery is "<<salery<<endl;
      }
} obj;
int main(){
  //mrinal obj;
  obj.get_data(24,3000000,"mrinal");
  obj.put_data();
  return 0;

}