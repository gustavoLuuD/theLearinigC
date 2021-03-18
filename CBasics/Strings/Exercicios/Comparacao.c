#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char s1 = "batatinha";
  char s2 = "batatinha";

  printf("Insira uma palavra\n");
  scanf(" %s",s1);
  printf("Insira outra\n");
  scanf(" %s",s2);

  if(strcmp(s1, s2) == 0)
    printf("As strings %s e %s sao iguais\n",s1, s2);
  else if(strcmp(s1, s2) > 0)
    printf("As string %s eh maior que  %s \n",s1, s2);
  else
    printf("As string %s eh menor que  %s \n", s2, s1);
  return 0;
}
