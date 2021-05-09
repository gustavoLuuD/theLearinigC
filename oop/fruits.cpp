#include <iostream>
using namespace std;

class Fruit{
  public :
    int healthyNess;
    string name;
    string color;
};

int main(){
  Fruit apple;
  apple.name = "apple";
  apple.color = "red";
  apple.healthyNess = 10;
  cout << apple.name << " " << apple.healthyNess;
  return 0;
}
