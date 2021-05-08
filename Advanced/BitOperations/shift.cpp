#include <iostream>

/*
  When we do a << n it means we are multipiying a times n^n
*/
using namespace std;
int main(){
  int a = 1;
  int b =  a << 2; // 1 -> 2 bit shift to left equals to 8
  int c = b >> 2; // 8 -> 2 bit shift to right esquals to 1 again

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  a <<= 4; // we can also use this notation
  cout << a << endl;
  return 0;
}
