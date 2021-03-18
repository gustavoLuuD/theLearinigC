#include <stdio.h>
#include <stdlib.h>

int main(){
  char* s1 = "4";
  char* s2 = "24";
  char* s3 = "14";
  char* s4 = "45";

  int n1 = atoi(s1);
  int n2 = atoi(s2);
  int n3 = atoi(s3);
  int n4 = atoi(s4);

  int sum = n1+n2+n3+n4;
  
  printf("%d", sum);
  return 0;
}
