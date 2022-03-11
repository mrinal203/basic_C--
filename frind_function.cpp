// w.a.p. to create a class great  to print the greatest no among 3 no.
// program to creat a class grat
// 3 diff - diff object lena hai aur usko compair krna hai.

#include<iostream> 
using namespace std;

class grat{
	
	private:
		int x;
    public :
	  void getdata(int t){
	  	x=t;
	  }		
	//  friend void  getAnsw( datatype ,datatype,datatype ""//-- yaha pr class type ka data pass ho rha hai );
	friend void  getAnsw(grat,grat,grat);
	
	  
};

 void getAns (grat a , grat b ,grat c){
 	
// 	int big= 0;
// 	 if( a.> b){
// 	 	big = a;
//	  }
//	  else{
//	  	big =b;
//	  }
//	  if (big > c){
//	  	 big =big;
//	  }
//	  else{
//	  	big = c;
//	  }
//	  cout<<" the big number is "<<big<<endl;
    
// 	int big= 0;
// 	 if( a.x> b.x){  // a.x----> bcz here  a is object and 
// 	                 // we hahve to access deta member of object "a" -->that's why we are using "a.x, and b.x
// 	 	big = a.x;
//	  }
//	  else{
//	  	big =b.x;
//	  }
//	  if (big > c.x){
//	  	 big =big;
//	  }
//	  else{
//	  	big = c.x;
//	  }
//	  cout<<" the big number is "<<big<<endl;
 }

int main(){
	
	grat g1,g2,g3;// 3 diff - diff object that will sore 3 diff values for x and 
	              // our function will claculate greatest among them.
	
	g1.getdata(8);
	g2.getdata(34);
	g3.getdata(1);
	//  step-1 we have to call friend function 
	// step -2 and pass three arg 
	// that arg will be Object of our class " bcz we can't invoked any friend ft^n throw object of class "
	
	
	getAns( g1 , g2 , g3);// all the vale of x will be diff diff and taking diff space 
	// step 4 -- we have to write code for "getAns ft^n//
}
//thanks