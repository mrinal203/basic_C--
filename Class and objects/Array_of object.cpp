// Array of Object 
// ----------------------
// the process of specifying an array of type class is known as array of object 
// example --------int arr[5]---->// array of integer 
// class example{

// }eample ex[10];-------------> it is array of object 
#include<iostream>
using namespace std;
class emp{

  private:
    char name[20];
    char address[30];
    int eid;
    long int salary;
    void getdata();
    void putdata();
};
void emp:: getdata(){
  cout<<"Enter name ";
  gets(name);
  cout<<"enter id "<<endl;
  cin>>id;
  cout<<"enter salary"<<endl;
  cin>>salary;
  cout<<"enter address"<<endl;
  gets(address);
}
void emp :: putdata(){
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<" name is "<<name<<endl;
  cout<<" id is "<<eid<<endl;
  cout<<" address is "<<address<<endl;
  cout<<" salary is "<<salary<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

int main(){
  emp e[3];
  cout<<" enter details of 3 employes:::::::"<<endl;
  for(int i =0; i<3; i++){
    e[i].getdata();

  }
  cout<<" details are "<<endl;
  for(int j=0; j<3; j++){
    e[j].putdata();
  }

  return 0;
}