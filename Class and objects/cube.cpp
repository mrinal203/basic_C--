// wap to create a class cube and print cube of a number 
#include<iostream>
using namespace std;
class cube{
   int num;
   public:
      void grt_data(int n){
        cout<<n*n*n;

      }
};
int main(){
  cube obj;
  int x;
  cout<<"enter a number "<<endl;
  cin>>x;
  obj.grt_data(x);
  return 0;
}