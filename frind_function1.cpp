#include<iostream>
using namespace std;

// frogram for explaning friend function

class mrinal{
	
	private:
		  int x;
		   public:
		   	void getdata(int a){
		   		
		   		x=a;
			   }
			   void display(){
			   	cout<<" x is "<<x<<endl;
			   }
			   
			   friend void getproduct(mrinal ,mrinal ,mrinal);
			   // here we are passing agrument "class " type  bcz in friend we pass object as a argunment 
};             // so we have to declere its data type ----- bc{hihih) 11/03/022
void  getproduct(mrinal M1, mrinal M2,mrinal M3){
//	int p= M1.x;
//	int q= M2.x;
//	int r = M3.x;
	int big=0;
	cout<<" also we have calculate big nnumber among them"<<endl;
//	if ( p>=q){
//		big=p;
//	}
//	else{
//		big=q;
//		
//	}
//	if(big >= r){
//		big=big;
//	}
//	else{ 
//	big = r;
//	}
if ( M1.x>=M2.x){
		big=M1.x;
	}
	else{
		big=M2.x;
		
	}
	if(big >= M3.x){
		big=big;
	}
	else{ 
	big = M3.x;
	}
	cout<< big<<" is greatest "<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<" the product is "<<M1.x * M2.x * M3.x<<endl;
}
 int  main(){
 	mrinal obj1, obj2,obj3;
 	obj1.getdata(1);
 	obj2.getdata(2);
 	obj3.getdata(3);
 	obj1.display();
    obj2.display();
	obj3.display(); 	
 	getproduct(obj1, obj2, obj3);
 	return 0;
 }