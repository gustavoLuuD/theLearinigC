#include<iostream>
using namespace std;

class Person{
  public:
    string name;
    int balance;
    int health_points;
    void speak(Person *p,string message){
      cout << p->name << " said \"" << message << "\" to " << name;
    }
};

int main(){
  Person p1;
  Person p2;
  p1.name = "Jhon";
  p2.name = "Marrie";
  p1.speak(&p2, "hello");
  return 0;
}
