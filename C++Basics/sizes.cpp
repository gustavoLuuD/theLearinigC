#include <iostream>
using namespace std;

int main(){
  cout << "An integer variable uses " << sizeof(int) << " bytes\n";
  cout << "A float variable uses " << sizeof(float) << " bytes\n";
  cout << "A double variable uses " << sizeof(double) << " bytes\n";//The precision of float is only six or seven decimal digits
  cout << "A boolean variable uses " << sizeof(bool) << " byte\n";
  cout << "A char variable uses " << sizeof (char) << " byte\n";
  return 0;
}
