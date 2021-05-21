#include <iostream>
using namespace std;

class AbstractAvenger{
    virtual void UseTheHammer() = 0; //this is an abstract function
};

class Avenger: AbstractAvenger{
  private:
    string Name;
    string Company;
    string Email;
    int Age;
    bool IsWorthy;

  public :
    Avenger(string name, string company, string email, int age, bool isWorthy=false){
      Name = name;
      Company = company;
      Email = email;
      Age = age;
      IsWorthy = isWorthy;
    }

    void setName(string name){
      Name = name;
    }

    string getName(){
      return Name;
    }

    void setCompany(string company){
      Company = company;
    }

    string getCompany(){
      return Company;
    }

    void setEmail(string email){
      Email = email;
    }

    string getEmail(){
      return Email;
    }

    void setAge(int age){
      Age = age;
    }

    int getAge(){
      return Age;
    }

    void Speak(string message){
      cout << Name << " said: \"" << message << "\""<< endl;
    }

    void SpeakTo(Avenger *p, string message){
      cout << Name << " said \"" << message << "\" to " << p->Name << endl;
    }

    void UseTheHammer(){
      if(IsWorthy)
        cout << " *THUNDER SOUNDS*\n" << Name << " is now using the mjolnir hammer" << endl;
      else
        cout << "Sorry kid you are not worthy of using the mjolnir hammer, maybe next time" << endl;
    }
};

int main(){
  Avenger dude1 = Avenger("Nick Fury", "S.H.I.E.L.D", "snakesOnAPlane@gmail.com", 50);
  Avenger dude2 = Avenger("Steve Rogers", "The Army of the United States of America", "firstAvenger@gmail.com", 115, true);

  dude1.SpeakTo(&dude2, "Howdy captain");
  dude2.SpeakTo(&dude1, "What do you want Fury?");
  dude1.SpeakTo(&dude2, "I am gathering a group of special people with special abilities...");
  dude2.SpeakTo(&dude1, "You mean the X-men?");
  dude1.SpeakTo(&dude2, "No, don't be stupid captain!");
  dude1.Speak("It's called Y.M.C.A");

  if(dude2.getAge() > dude2.getAge())
    cout << "\n" << dude1.getName() << " is older than " << dude2.getName() << endl;
  else
    cout << "\n" << dude2.getName() << " is older than " << dude1.getName() << endl;

  dude1.UseTheHammer();
  return 0;
}
