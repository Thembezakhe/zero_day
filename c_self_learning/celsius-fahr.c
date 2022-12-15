#include <stdio.h>
/*Converts Celsius to Fahrenheit 
 *and prints output in a table
 *for Celsius = 0, 15, 30, ...., 300 */

int main()
{
  float Celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 15;
  Celsius = lower;
  printf("Celsius\tFahr\n");
  while (Celsius <= upper)
    {
      fahr = (9.0/5.0 * Celsius) + 32;
      printf("%3.0f\t%3.0f\n", Celsius, fahr);
      Celsius = Celsius + step;
    }
}
