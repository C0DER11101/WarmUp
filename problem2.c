#include<stdio.h>
#include<stdlib.h>

/* write a program to enter 10 numbers ranging from 1 to 50 and draw a histogram by displaying adjacent '=' signs for each number entered.
*/

int main(void)
{
	int*a=malloc(10*sizeof(int));

	printf("\nenter 10 numbers: ");
	for(int i=0; i<10; i++)
		scanf("%d", a+i);

	printf("\nHistogram!!\n");

	for(int i=0; i<10; i++)
	{
		printf("|");
		for(int j=0; j<a[i]; j++)
			printf("=");
		printf("\n");
	}

	free(a);
	return 0;
}
