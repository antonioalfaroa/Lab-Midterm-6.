#include <iostream>

using namespace std;

class HugeInteger{
  //Write the source code here
  public:
  HugeInteger operator+(const HugeInteger &h1)const{
  HugeInteger h;
    h.bigInteger = this->bigInteger + integer;
    return h;
  }
void setinteger(int inte,int bigin){
  integer = inte;
  bigInteger = bigin;
}
int sum(){
  int sum;
  sum = integer + bigInteger;
  return sum;
}
private:
int bigInteger = 0;
int integer = 0;

};

int main(void){
  HugeInteger bigInteger;
  int integer = 4;
  int bigint = 5;
  HugeInteger h;
  h.setinteger(integer,bigint);
  cout<< "= "<<h.sum();
  

 //Write the source code here
  



  return 0;
}
