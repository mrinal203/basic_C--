#include<iostream>
#include<string.h>
using namespace std;
// program to creat employee haveing data member name id address designation post and salary . use appropriatnmember function to store data and display 
class emp{
  private :
    int eid;
    char name[15];
    char address[30];
    char designation[15];
    long int salary;

   public:
     void get_info(int id,char nm[], char add[] ,char desig[], long int sal ) {
      eid=id;
      strcpy(name,nm);
      strcpy(address,add);
      strcpy(designation,desig);
      salary= sal;
     }
     void display(){
      cout<<"------------------------------------"<<endl;
      cout<<"Name is"<<name<<endl;
      cout<<"------------------------------------"<<endl;
      cout<<"Id is  "<<eid<<endl;
      cout<<"------------------------------------"<<endl;
      cout<<"Address is"<<address<<endl;
      cout<<"------------------------------------"<<endl;
      cout<<"Designation is "<<designation<<endl;
      cout<<"------------------------------------"<<endl;
      cout<<"Salary is"<<salary<<endl;
      cout<<"------------------------------------"<<endl;
      cout<<"       "<<"***"<<"       "<<endl;
     }
};
int main(){
   emp obj1,obj2;
   int id1;
   long int sal1;
   char nam[15];
   char add1[30];
   char degni1[15];
   cout<<"enter employ id "<<endl;
   cin>>id1;
   cout<<"enter name"<<endl;
   gets(nam);
   cout<<"enter address "<<endl;
   gets(add1);
   cout<<"enter designation "<<endl;
   gets(degni1);
   cout<<" enter salary"<<endl;
   cin>> sal1;

   obj1.get_info(id1,nam,add1,degni1,sal1);
   obj1.display();
   obj2.get_info(121,"Deepak","Uttarpardesh","Engineer",1600000);
   obj2.display();

  return 0;
}