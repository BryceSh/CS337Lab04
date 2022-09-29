#include <stdio.h>

int main(int args, char** argc) {
  for (int i = 1; i<args; i++) {
    printf("%s \n", argc[i]);
  }
  printf("Hello World\n");
  return 0;
}