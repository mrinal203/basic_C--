#include<iostream>
using namespace std;

// program to make a member function of a class  friendly to anther class ::

// making member function of a class friendly to another class:-
//
class Mno;
class Xyz{
	private:
		int x,y;
	public:
	   void getdata(int a, int b){
	   	x=a; y=b;
	   }
	   	public:
	   void display(){
	   	cout<<"  x is "<<x<<endl;
	   	cout<<" y is "<<y <<endl;
	   }
	   	public:
	   friend void Mno::sum( Xyz); 	
	   
};
class Mno{
	public:
		
	void sum(Xyz  m){
		int result = m.x + m.y;
		cout<<"sum is "<<result<<endl;
		
	}
};

void main(){
	Xyz r;
	r.getdata(10,7);
	r.display();
	Mno p;
	p.sum(r);
	return 0;
}