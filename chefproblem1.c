#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char**status=malloc(500*sizeof(char*));
	for(int i=0; i<500; i++)
		status[i]=malloc(100*sizeof(char));

	int R, L;

	char*report=NULL, lastSym;

	scanf("%d", &R);

	for(int i=0; i<R; i++)
	{
		lastSym='\0';
		scanf("%d", &L);
		getchar();
		report=malloc(L*sizeof(char));
		fgets(report, L+1, stdin);
		getchar();

		for(int j=0; report[j]!='\0'; j++)
		{
			if(report[j]=='T' && lastSym=='\0')
			{
				strcpy(status[i], "Invalid");
				break;
			}

			else if(report[j]=='H' && lastSym=='H')
			{
				strcpy(status[i], "Invalid");
				break;
			}

			else if(report[j]=='T' && lastSym=='T')
			{
				strcpy(status[i], "Invalid");
				break;
			}

			else
			{
				strcpy(status[i], "Valid");
			}

			lastSym=(report[j]=='H'|| report[j]=='T')? report[j]:lastSym;
		}

		if(lastSym=='H')
			strcpy(status[i], "Invalid");

		free(report);
	}

	printf("\n");

	for(int i=0; i<R; i++)
		printf("%s\n", status[i]);

	for(int i=0; i<500; i++)
		free(status[i]);

	free(status);

	return 0;
}
