#include <stdio.h>

#define MAXLEN 1000
#define IN 1
#define OUT 0

int read_lines(char line[]);

int main()
{
  int len;
  char line[MAXLEN];
  
  len = 0;

  while ((len = read_lines(line)) > 0)
    printf("%s\n", line);

  return 0;
}

int read_lines(char line[])
{
  int c, state, i;
  
  state = OUT;

  for (i = 0; i < MAXLEN -1  && ((c = getchar()) != EOF) && c != '\n'; ++i)
    
    {
      if (c != '\t')
	line[i] = c;
      if (c == ' ' && state == OUT){
	state = IN;
	line[i] = c;
      }
      else if (state == IN && c != ' '){
	state = OUT;
	line[i] = c;
      }
    }

  if (c == '\n'){
    line[i] = c;
  line[i + 1] = '\0';
  }

  return i;

}
