#include<iostream>
using namespace std;


// method /way to invoked parameterise constructor
// 1) Implicit calling
// 2) Explict calling 
class demo{
	
	int x,y,z;

     public:
	      demo(int a, int b, int c){
	      	
	         	x= a; y= b; z = c;
	   	
	        }
	   void display(){
	   	cout<<"___________________________"<<endl;
	   	cout<<" x is "<<x<<endl;
	   	cout<<" y is "<<y<<endl;
	   	cout<<" z is "<<z<<endl;
	   	cout<<"___________________________"<<endl;
	   }	
};
int main(){
	demo obj1(5,4,7);
	
	 demo obj2= demo(2,89,76);// initilize object 
	
	 obj1.display();
	 obj2.display();
	 return 0; 
	 
	 
	 
	         // constructor is udse to initilize the object .
	 
} 