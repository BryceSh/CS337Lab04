#include <stdio.h>
#include <string.h>

int main(int argc, char **argu) {
  for (int i = argc - 1; i > 0; i--) {
    if (i <= argc) {
      int x = strcmp(argu[i], argu[i - 1]);
      if (x > 0) {
        printf("%d %s \n", i,argu[i]);
      }
    }
  }
  return 0;
}