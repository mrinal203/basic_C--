// w. a p to print smallest number in array
#include<iostream>
using namespace std;

int main(){
  int *p;
  p = new int[10];
  cout<<" enter 10 element in array::"<<endl;
  for(int i=0; i<10; i++){
    cin>>*(p+i);

  }
  int temp = *(p+0);
  for( int j =1; j<10; j++){
    if(temp > *(p+j)){
       temp = *(p+j);
    }
    
  }
  cout<<" the smallest element is "<<temp<<endl;
  delete[]p;
  return 0;
}