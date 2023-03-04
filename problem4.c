#include<stdio.h>
#include<stdlib.h>

/* write a program to print all four-digit palindrome numbers */

int main(void)
{
	for(int i=1000; i<=9999; i++)
	{
		{
			int copy=i, reverse=0, lastDigit=0;
			while(copy!=0)
			{
				lastDigit=copy%10;
				reverse=reverse*10+lastDigit;
				copy/=10;
			}

			if(reverse==i)
				printf("%d\n", i);
		}
	}

	return 0;
}
