#include <stdio.h>

union number{
  int x;
  double y;
};

int main(){
  union number value;
  value.x = 100;
  printf("Value x -> %d\nvalue y -> %f \n",value.x, value.y);

  value.y = 100.0;
  printf("Value x -> %d\n value y -> %f\n",value.x, value.y);
  return 0;
}
