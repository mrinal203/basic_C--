/*return by referance ::::::::::::;
We can return value of a variable as referance using refferance opt/alias.
we have to place referance opt(&) after return type to return data as referance 
example
 
*/
 #include<iostream>
 using namespace std;
  int &great(int &x, int &y){
    if (x>y){
      return (x);

    }
    else{
      return(y);
    }
  }
  int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int res = great(a,b);
   // cout<<" a = "<<a<" "<<" b = "<<b<<endl;
    cout<<res;
    return 0;
  }