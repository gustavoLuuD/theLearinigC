#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void transformMinuscula(char *s) {
  int i = 0;
  while(s[i] != '\0'){
    s[i] = tolower(s[i]);
    i++;
  }
}

void transformMaiuscula(char* s){
  int i = 0;
  while(s[i] != '\0'){
    s[i] = toupper(s[i]);
    i++;
  }
}

int main(){
  char string[100];
  printf("Insira uma palavra de tamanho maximo 99\n");

  scanf(" %[^\n]s", string);
  transformMaiuscula(string);

  printf("%s\n", string);
  transformMinuscula(string);

  printf("%s\n", string);
  return 0;
}
