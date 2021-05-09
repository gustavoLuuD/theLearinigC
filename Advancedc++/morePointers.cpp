#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "\n";
  string *sptr = &str;
  cout << sptr;
  cout << *sptr << "lalala";
  return 0;
}
