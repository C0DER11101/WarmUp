#include<stdio.h>
#include<stdlib.h>

/* write a program that enters temperature in Celsius and converts that into Fahrenheit. */

/* Formula:
   F=(9/5)*<temperature in degree Celsius>+32
*/

int main(void)
{
	double celsius;

	printf("enter temperature(degree Celsius): ");
	scanf("%lf", &celsius);

	double fahrenheit=((double)9/5)*celsius+32;

	printf("\nEquivalent fahrenheit: %.2lf\n", fahrenheit);

	return 0;
}
