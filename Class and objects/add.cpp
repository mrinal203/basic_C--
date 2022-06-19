// WAP to ceaete class name add and add one integer and two float number together 
class add{
   int num1;

   float num2, num3;
   
    public:
     viod get_info(int x, float y, float z){
      num1=x;
      num2=y;
      num3=z;
     }
     void display_sum(){
      int sum = num1+num2+num3;
      cout<<" sum  is"<<sum<<endl;
     }
}