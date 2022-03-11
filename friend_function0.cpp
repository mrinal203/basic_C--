// program to expalain exmple of friend () function
#include<iostream>
using namespace std;


class prod{
	
	
	int x,y,z;
	
	public:
		void getdata(int a,int b,int c){
			x=a;y=b;z=c;
		}
		// work for display function
		void display()
		{
			cout<<"x is "<<x<<endl;
			cout<<"y is"<<y<<endl;
			cout<<"z is"<<z<<endl;
			
		}
		//friend function decelaration 
		friend void getproduct(prod);
};

void getproduct( prod p){
	cout<<" product is sa"<<p.x * p.y* p.z<<endl;
}
int main(){
	prod m;
	m.getdata(10,15,7);
	m.display();
     getproduct(m);
	return 0;
}