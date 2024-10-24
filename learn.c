#include <stdio.h>
#include <string.h>

int main() {

  int i = 8;
  double j = 2;

  char str1[] = "How are you? " "I'm fine";
  char str2[] = ". Me too!";

  char str3[strlen(str1)+strlen(str2)];
  sprintf(str3, "%s%s", str1, str2);

  char lett = '9';

  enum months { JAN = 1, FEB, MAR, APR };

  printf("%.3f\n", j / i);
  printf("%s\n", str3);
  printf("%c\n", lett);
  printf("%d\n", lett);
  printf("%d\n", JAN);

  return 0;
}