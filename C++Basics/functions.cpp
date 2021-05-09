#include <iostream>
using namespace std;

string getDefault(){
  return "Jhon Doe";
}

void printName(string name = getDefault()){
    cout << name << endl;
}

int main(){
  string name;
  printName();
  cout << "What's your name man? ";
  getline(cin, name);
  printName(name);
  return 0;
}
