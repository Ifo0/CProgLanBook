#include <stdio.h>
#include <string.h>

/* A program to print the Fahrenheit to Celsius table */

int main(void)
{
  float lower, upper, step;
  float celsius, fahr;
  

  lower = -17.8;
  upper = 148.9;
  step = 11.1;

  celsius = lower;
  printf("%s %s\n", "Celsius", "Fahrenheit");
  while (celsius <= upper) {
    fahr = (9.0/5.0 * celsius) + 32.0;
    printf("%6.1f %6.1f\n", celsius, fahr);
    celsius += step;
  }

}
