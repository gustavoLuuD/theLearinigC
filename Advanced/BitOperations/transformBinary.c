#include <stdio.h>

void displayBits(unsigned value){
  unsigned c;
  unsigned displayMask = 1 << 31;
  printf(" %10u\n",value);
  for(c = 1; c <= 32; c++){
    putchar(value & displayMask ? '1' : '0');
    value <<= 1;
    if(c % 8 == 0){
      putchar(' ');
    }
  }
  putchar('\n');
}

int main(){
  unsigned x;
  printf("Insert a unsigned value -> ");
  scanf(" %u", &x);
  printf("\n");
  displayBits(x);
  return 0;
}
