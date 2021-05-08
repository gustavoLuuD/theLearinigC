#include <iostream>
using namespace std;

void reactToAge(int myAge);

int main(){
  unsigned int i = 115.988;
  double j = 40.15;
  char letter = 65;
  char otherLetter = 'J';
  bool wake = true;
  string name = "Jhon";     //different from c, c++ have strings
  int myAge;
  const int eternalInt = 78;
  //eternalInt = 45;       //uncomment this gives an error 

  cout << name << "\n";
  cout << letter << "\n";
  cout << otherLetter << "\n";
  cout << wake << "\n";
  cout << j << "\n";
  cout << i << "\n ";
  cout << eternalInt << "\n";

  cout << "How old are you bra? ";
  cin >> myAge;
  reactToAge(myAge);

  return 0;
}

void reactToAge(int myAge){
  if(myAge < 10)
    cout << "Dude go play pokemon";
  else if(myAge < 18)
    cout << "U got much to learn kid";
  else if(myAge >= 18 && myAge < 25)
    cout << "Hell yes";
  else if(myAge >= 25 && myAge < 50)
    cout << "Dude stop looking at some stupid jokes on c++ code and go to work";
  else if(myAge >= 50 && myAge < 110)
    cout << "An elder I see";
  else if(myAge >= 200 && myAge < 500)
    cout << "Dude die u have more than 200 years";
  else if(myAge >= 500 && myAge < 1000)
    cout << "Are you the doomslayer?";
  else
    cout << "WTF bra";
}
