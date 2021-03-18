#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char string[] = "Esta, eh, uma, sentenca, com, 7,tokens";
  char *tokenPtr;

  tokenPtr = strtok(string, ", ");//inicia a separacao de tokens

  while(tokenPtr != NULL){
    printf("%s\n",tokenPtr);
    tokenPtr = strtok(NULL, ", ");
  }
  return 0;
}
