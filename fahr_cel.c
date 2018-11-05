#include <stdio.h>

int main()
{
  /* Prints the fahrenheit - celsius table
  for faht = 0, 20 .... 300
  */
  // the program is written in ingegers
  //therefore the output is not accurate

  int fahr, celsius; /* declaring the variables*/
  int lower, upper, step;

  lower = 0; /* assigning */
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) { /* the while loop check the condition and
                              runs once per output line */
    celsius = 5 * (fahr - 32) / 9; /* there are three statements in the program */
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

}
