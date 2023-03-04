#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool inConsonants(char);

int main(void)
{
	int ConsecCons=0, T, N;

	scanf("%d", &T);

	char**status=(char**)malloc(T*sizeof(char*)), *strings;

	for(int i=0; i<T; i++)
		status[i]=(char*)malloc(3*sizeof(char));

	for(int i=0; i<T; i++)
	{
		scanf("%d", &N);
		getchar();
		strings=malloc(N*sizeof(char));
		scanf("%s", strings);
		getchar();
		ConsecCons=0;
		for(int j=0;strings[j]!='\0'; j++)
		{
			if(!inConsonants(strings[j]))
				ConsecCons=0;
			else
				ConsecCons++;

			if(ConsecCons>=4)
				break;

		}

		if(ConsecCons>=4)
			strcpy(status[i], "NO");
		else
			strcpy(status[i], "YES");

		free(strings);
	}


	for(int i=0; i<T; i++)
		printf("\n%s", status[i]);
	printf("\n");


	for(int i=0; i<T; i++)
		free(status[i]);
	free(status);

	return 0;
}

bool inConsonants(char ch)
{
	char consonants[]="bcdfghjklmnpqrstvwxyz";

	for(int i=0; consonants[i]!='\0'; i++)
	{
		if(ch==consonants[i])
			return true;
	}

	return false;
}
