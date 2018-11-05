#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int lineread(char line[], int maxline);
void copy(char to[], char from[]);


/* print the longest input line */
int main()
{
  int len;            /* current line length */
  int max;            /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char formated[MAXLINE]; /* longest line saved here */

  /* max = 0;*/		      
  while ((len = lineread(line, MAXLINE)) > 0)
    if (len > 1) {
      max = len;
      copy(formated, line);
      printf("%s", formated);
      line[0] = '\0';
    }
  /* if (max > 0) 
    printf("%s", longest);*/
  return 0;
}

 /* getline:  read a line into s, return length  */
int lineread(char s[],int lim)
{
  int c, i;

  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
   }
  s[i] = '\0';
  return i;
}


/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i, j;
  j = i = 0;
  
  while (from[i]!= '\0'){
    if (from[i] == '\t')
      i++;
    else if (from[i] == ' '){
      to[j] = from[i];
      j++;
      i++;
      while (from[i] == ' ')
	i++;
    }
    else {
      to[j] = from[i];
      ++j;
      ++i;
    }
  }
  j++;
  to[j] = '\0';
}
