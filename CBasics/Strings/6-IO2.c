#include <stdio.h>
#include <stdlib.h>

int main(){
  char str1[100];
  char* str2;


  scanf(" %s",str1);
  strcpy(str2, str1);

  printf("%s == %s", str1, str2);
  return 0;
}
