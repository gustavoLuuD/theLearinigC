#include <stdio.h>
#include <stdlib.h>

int main(){
  char* number = "123";
  char* number2 = "123.456";
  char* number3 = "10000000";
  char* number4 = "150";
  char* number4ptr;

  printf("A string %s foi convertida para o int %d por meio de atoi.\n",number, atoi(number));
  printf("A string %s foi convertida para o double %f por meio de atof.\n",number2, atof(number2));
  printf("A string %s foi convertida para o long double %ld por meio de atol\n",number3, atol(number3));
  printf("A string %s foi convertida para o unsigned long %ld por meio de atol\n",number4, strtoul(number4, &number4ptr, 0));
  return 0;
}
