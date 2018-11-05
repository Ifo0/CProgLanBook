#include <stdio.h>
#define MAXINPUT 1000


int main()
{
  int len;
  char string[MAXINPUT];
  int c, i;

  i = 0;
  while ((c = getchar()) != '\n' && i < MAXINPUT -1){
    string[i] = c;
    ++i;
  }
  
  string[i] = '\0';

  for(len = i - 1; len >= 0; --len){
    putchar(string[len]);
  }
   printf("\n");
}

