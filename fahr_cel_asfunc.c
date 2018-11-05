#include <stdio.h>

float fahr_to_cel(float fahr);

int main()
{
  float lower, upper, step;
  float fahr;
  
  lower = 0;
  upper = 300;
  step = 20;

  for (fahr = 0; fahr <= upper; fahr += step)
    printf("%3.0f %6.1f\n", fahr, fahr_to_cel(fahr));
  
}


float fahr_to_cel(float fahr)
{
  float celsius;

  celsius = 5.0/9.0 * (fahr - 32.0);

  return celsius;
}
