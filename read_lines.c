#include <stdio.h>
#define MAXLEN 1000

int readline(char line[], int maxlen);

/*-void copy(char to[], char from[]);   */

int main()
{

  int len;
  char line[MAXLEN];
  /* char longline[MAXLEN]; */

  len = 0;

  while ((len = readline(line, MAXLEN)) > 0)
    {
      printf("%d", len);
      if (len > 30)
	{
	  printf("This is a copy:  %s\n", line);  
	  /*  copy(longline, line);	  */
	}
        
    }
  return 0;
}

/* writes characters to an array until a newline is reached
returns the lenght of the line. This is used by the main function to 
and only lines longer than 80 chars are directly printed as output
*/

int readline(char line[], int maxlen)
{

  int c, i;

  for (i = 0; i < maxlen - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
  {
    line[i] = c;
  }
    
  if (c == '\n')
    {
      line[i] = c;
      ++i;
    }


  line[i] = '\0';
  return i;
}


/* void copy(char to[], char from[]) */
/* { */
/*   int i; */

/*   i = 0; */
/*   while ((to[i] = from[i]) != '\0') */
/*     ++i; */
/* } */
