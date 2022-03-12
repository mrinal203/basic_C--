#include<iostream>
using namespace std;

class A{
	private:
		int a,b;
	public:
		A( int a, int b){ // parameterized
		//	a=10;b=30;
		cout<<"_______________________________________________"<<endl;
		    cout<<"first constructor is called"<<endl;
			 cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
			 cout<<"_______________________________________________"<<endl;
		}
		A( double t){ // parameterized
			a=t;
			 cout<<"Second constructor is called"<<endl;
			 cout<<a<<endl;
			 cout<<"_______________________________________________"<<endl;
		}
		 
};
int main(){
	A onj(3,4);
	A obj2(65.90);
	return 0;
}