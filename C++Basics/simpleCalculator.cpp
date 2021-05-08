#include <iostream>

using namespace std;

int operate(int x, int y, int operation){
  int result;
  switch (operation){
    case 1: result = x + y;break;
    case 2: result = x - y;break;
    case 3: result = x * y;break;
    case 4: result = x / y;break;
  }
  return result;
}

int main(){
  int x, y, operation;
  cout << "* * * * Simple Calculator * * * *"<<"\nInsert a value: ";
  cin >> x;
  cout << "\nInsert another value: ";
  cin >> y;

  cout << "\nChoose the operation: \n1 -> sum \n2 -> subtraction \n3 -> multiplication \n4 -> division \n";
  cin >> operation;
  cout << "\nResult: " << operate(x, y, operation);
  return 0;
}
