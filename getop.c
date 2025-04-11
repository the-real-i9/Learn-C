#include <stdio.h>
#include <ctype.h>
#include "calc.h"

/* getop: get next character or numeric operand */
int getop(char s[]) {
  int i, c;

  while((s[0] = c = getch()) == ' ' || c == '\t'); // proceed as soon as the current char isn't whitespace

  // here 'c' is either a digit, a decimal point, or an operator

  s[1] = '\0'; // end string

  if (!isdigit(c) && c != '.')
    return c; // then 'c' is an operator

  // but now, 'c' is either a digit, or a decimal point

  i = 0; // since we'll increcment the index, to append the next digit (below)

  if (isdigit(c))
    // we want to get the digits (numbers) following the first until we hit a non-digit
    while(isdigit(s[++i] = c = getch()));

  // now we've hit a non-digit and it's a decimal point
  if (c == '.')
    // then we get more digits following the decimal point
    while (isdigit(s[++i] = c = getch()));

  s[i] = '\0'; // end string (we now have a complete number)

  if (c != EOF) // if the non-digit entered is not EOF (i.e. user is not done supplying inputs)
    // put it in a buffer (to process the complete number we currently have)
    ungetch(c);

  return NUMBER; // return the signal that a complete number is present in s
}
