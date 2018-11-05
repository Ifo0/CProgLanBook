#include <stdio.h>

int main()
{
  int counter, literal;
  counter = 0;
  literal = getchar();
  while (literal != EOF) {
    if (literal == ' ' || literal == '\t')
      ++counter;
    literal = getchar();
    printf("%d\n", counter);
  }

}
