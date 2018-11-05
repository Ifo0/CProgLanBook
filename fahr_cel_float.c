#include <stdio.h>

//A more precice program for printing the Farh - Cel table for
//Farh values 0,20 .... 300
/* Main consists of one statement, while while of three 
*/

int main()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5.0/9.0 * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius); /* the values after %
    allow us to specify the width of the field and the precision of the float
    trough the numbers before and after the dot respectively. In that way we justify
    the output*/
    fahr += step;
  }

}
