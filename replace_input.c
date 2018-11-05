#include <stdio.h>

int main()
{

  int input, boolean;

  while ((input = getchar()) != EOF){
    boolean = 0;
    if (input == '\t'){
      putchar('\\');
      putchar('t');
      boolean = 1;
    }
    if (input == '\b') {
      putchar('\\');
      putchar('b');
      boolean  = 1;
    }
    if (input == '\\') {
      putchar('\\');
      boolean = 1;
    }
    if (boolean != 1)
      putchar(input);
  }


}
