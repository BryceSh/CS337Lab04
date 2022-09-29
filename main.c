#include <stdio.h>
#include <string.h>

int main(int argc, char **argu) {
  for (int i = 1; i < argc; i++) {
    if (i <= argc) {
      int x = strcmp(argu[i], argu[i - 1]);
      if (x > 0) {
        printf("%s \n", argu[i]);
      }
    }
  }
  return 0;
}