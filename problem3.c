#include<stdio.h>
#include<stdlib.h>

/* write a program to enter a number and find its reverse and also display the double of that reversed number */

int main(void)
{
	int number, copy;
	printf("enter a number: ");
	scanf("%d", &number);
	copy=number;

	int reverse=0;

	while(copy!=0)
	{
		{
			int lastDigit=copy%10;
			reverse=reverse*10+lastDigit;
		}

		copy/=10;
	}

	printf("\n%d -> %d -> %d\n", number, reverse, 2*reverse);

	return 0;
	return 0;
}
