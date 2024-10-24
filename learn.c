#include <stdio.h>
#include <string.h>

int main() {

  int i = 8;
  double j = 2;

  char* str1 = "How are you? " "I'm fine";

  int lenStr = strlen(str1);

  printf("%.3f\n", j / i);
  printf("%s\n", str1);

  return 0;
}