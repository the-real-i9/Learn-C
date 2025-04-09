#include <stdio.h>
#include <string.h>

int main() {

  int lower = 0, upper = 300, step = 20, celcius;

  for (int farenheit = lower; farenheit <= upper; farenheit += step) {

    celcius = 5 * (farenheit - 32) / 9;

    printf("%d\t%d\n", farenheit, celcius);
  }
  

  return 0;
}