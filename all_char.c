#include <stdio.h>

#define ASCII 93
#define LOWERCHARBOUND 33

int main()
{
  /* A program to print the frequencies of each char 
   in its input*/

  int c, k, z, i, y, m, g;
  int curr_freq, max_freq;
  long ascii_char[ASCII];
  int s = 0;
  
  for (i = 0; i < ASCII; ++i)
    {
      ascii_char[i] = 0;
    }

  while ((c = getchar()) != EOF)
    {
      if (c >= 33 && c <= 126)
	++ascii_char[c - 33];	
    }
  
  max_freq = ascii_char[0];
  for (y = 0; y < ASCII; ++y)
    {
     
      curr_freq = ascii_char[y];

      if (curr_freq > max_freq)
  	max_freq = curr_freq;
    }
  
  for (m = max_freq; m > 0; --m)
    {
      printf("%3d|", m);
      for (k = 0; k < ASCII; ++k)
      {
	/* printf("%d", s); */
      	if (ascii_char[k] >= m)
      	  {
      	    printf("*");
      	  }
      	else
	  {
	    printf(" ");	
	  }
      }
      printf("\n");
    }

 
  printf("    ");
  for (g = LOWERCHARBOUND; g < ASCII + LOWERCHARBOUND; ++g)
   {
     printf("%c", g);
   }
  
  printf("\n");
  for (int z = 0; z < ASCII; ++z)
   {
     printf("%ld", ascii_char[z]);
   }
  printf("\n");


}
