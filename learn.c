#include <stdio.h>
#include <string.h>

#define LOWER 0
#define UPPER  300
#define STEP 20

int main() {

  int c;

  c = getchar();
  while (c != EOF) {
    printf("---");
    putchar(c);
    printf("+++");
    c = getchar();
  }
  
  return 0;
}