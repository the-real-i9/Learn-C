#include <stdio.h>
#include <string.h>

int strindex(const char *source, const char *pattern) {
  int i, j, k;
  for (i = 0; source[i] != '\0'; i++) {
    for (j = i, k = 0; pattern[k] != '\0' && source[j] == pattern[k]; j++, k++);
    
    if (pattern[k] == '\0') {
      return i;
    }
  }

  return -1;
}

int strlastindex(const char *source, const char *pattern) {
  int i, j, k;

  int lastindex = -1;

  for (i = 0; source[i] != '\0'; i++) {
    for (j = i, k = 0; pattern[k] != '\0' && source[j] == pattern[k]; j++, k++);
    
    if (pattern[k] == '\0') {
      lastindex = i;
    }
  }

  return lastindex;
}

int main() {

  char *source = "one two three one two three";
  char *pattern = "four";

  printf("Index of '%s' in '%s' is %d\n", pattern, source, strindex(source, pattern));
  printf("Last index of '%s' in '%s' is %d\n", pattern, source, strlastindex(source, pattern));

  return 0;
}