#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int x = 5, y = 1455;
  cout << "The biggest value between " << x << " and " << y << " is " << max(x,y) << endl;
  cout << "The smallest value between " << x << " and " << y << " is " << min(x,y) << endl;
  cout << "The quare root of the number 9 is " << sqrt(9) << endl;
  cout << "The cube root of the number 64 is " << cbrt(64) << endl;
  cout << "1.644 rounded is " << round(1.644) << endl;
  cout << "The natural log of 8 is " << log(8) << endl;
  cout << "The absolute value of -1 is " << abs(-1) << endl;

  cout << "\nThe cossine of 90 is " << cos(90) << endl;
  cout << "The sine of 90 is " << sin(90) << endl;

  return 0;
}
