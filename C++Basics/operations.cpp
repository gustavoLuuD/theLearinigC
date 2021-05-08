#include <iostream>
using namespace std;

int main(){
  int a = 7;  //Assignment operator
  a += 20;    //addition assignment operator
  a -= 10;    //subtraction assignment operator
  a /= 1;     //division assignment operator
  a <<= 2;    //shift assignment operator
  a >>= 2;    //shift assignment operator

  int b = 1, c = 0;
  cout << (b && c) << endl;   //result = 0
  cout << (b || c) << endl;   //result = 1
  cout << (b && !c) << endl;  //result  = 1
  return 0;
}
