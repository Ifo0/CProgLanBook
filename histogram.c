#include <stdio.h>

/*
get input
parse until a whitespace or tab or newline is reached
count the parsed charaters
increment the array holding the maxwordlen by one for the index
that corresponds to the lenght of the parsed thing
*/

#define IN 0
#define OUT 1
#define MAXWORDLEN 10

int main()
{

  int c, nc, state, i, j;
  int wordlen[11];
  state = IN;
  nc = 0;
  i = 0;
  j = 0;

  for (i = 0; i < 10; ++i)
    wordlen[i] = 0;

  while((c = getchar()) != EOF){
    ++nc;

    if (c == ' ' || c == '\n' || c == '\t'){
      --nc;
      state = OUT;
    }
    if (state == OUT && nc != 0 && nc < MAXWORDLEN){
      ++wordlen[nc];
      state = IN;
      nc = 0;
    }
  }
  for (i = 1; i <= MAXWORDLEN; ++i){
    printf("%d ", i);
    for (j = 0; j < wordlen(); ++j){
      putchar('*');

    }
    putchar('\n');
  }

  }
