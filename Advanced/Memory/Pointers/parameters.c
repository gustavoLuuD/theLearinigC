#include <stdio.h>
#include <stdlib.h>

void test(int array[], int value, int n){
  for(int i = 0; i < n; i++){
    array[i] = 0;
  }
  value = 15;
  printf("Value's memory adress-> %d\n",&value);
  printf("Array's memory adress-> %p\n",array);
}

void printArray(int array[], int n) {
  printf("[");
  for(int i = 0; i < n; i++){
    printf("%d",array[i]);
    if(i < n - 1)
      printf(", ");
  }
  printf("]\n");
}

int main(){
  int value = 78;
  int values[] = {1,2,3,4,5,6,7,8,9,10};

  printf("Value's memory adress-> %d\n",&value);
  printf("Array's memory adress-> %p\n",values);

  printf("## Before the test ##\n");
  printf("Value -> %d\n",value);
  printArray(values, 10);

  test(values, value, 10);

  printf("## After the test ##\n");
  printf("Value -> %d\n",value);
  printArray(values, 10);
  return 0;
}
