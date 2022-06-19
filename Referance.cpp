#include<iostream>
using namespace std;
void main(){
  char ch = " Hello_India";
  char *ptr = &ch;
  char *&rptr =ptr;
  cout<<ptr;
  cout<<rptr;
  cout<<ptr + 6;
  cout<< rptr+ 6;
  return 0;
}
// i cant find the error in this program 

