#include <stdio.h>

int main()
{

  int eof, c;
  eof = EOF;
  printf("%d\n", EOF);

  while ((c = getchar()) != eof){
    putchar(c);
  }


}
