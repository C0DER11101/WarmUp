#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Write a function htoi(), which converts a hexStr of hexadecimal digits into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. */

size_t htoi(char*);
size_t powHex(int, int, int);

int main(void)
{
	char*hexStr;

	hexStr=malloc(1000*sizeof(char));
	strcpy(hexStr, "NULL");
input:
	printf("enter hexadecimal string: ");
	scanf("0x%s", hexStr);

	if(strcmp(hexStr, "NULL")==0)
	{
		char*temp=malloc(1000*sizeof(char));
		fgets(temp, 1000, stdin);
		printf("\nPlease put \"0x\" before %s\n", temp);
		free(temp);
		goto input;
	}

	size_t decEq=htoi(hexStr);

	printf("\nDecimal equivalent of 0x%s is %lu\n", hexStr, decEq);


	free(hexStr);

	return 0;
}

size_t powHex(int hex, int times, int cnt)
{
	if(times<0 || times==0)
		return 1;

	if(cnt==times-1)
		return hex;

	return hex*powHex(hex, times, cnt+1);
}

size_t htoi(char*s)
{
	size_t decEq=0, strLen=strlen(s);
	for(int i=0; s[i]!='\0'; i++)
	{
		switch(s[i])
		{
			case 'a':
				decEq+=10*powHex(16, strLen-1, 0);
				break;
			case 'b':
				decEq+=11*powHex(16, strLen-1, 0);
				break;
			case 'c':
				decEq+=12*powHex(16, strLen-1, 0);
				break;
			case 'd':
				decEq+=13*powHex(16, strLen-1, 0);
				break;
			case 'e':
				decEq+=14*powHex(16, strLen-1, 0);
				break;
			case 'f':
				decEq+=15*powHex(16, strLen-1, 0);
				break;

			case '0':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '1':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '2':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '3':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '4':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '5':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '6':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '7':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '8':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;
			case '9':
				decEq+=(s[i]-'0')*powHex(16, strLen-1, 0);
				break;

			case 'A':
				decEq+=10*powHex(16, strLen-1, 0);
				break;
			case 'B':
				decEq+=11*powHex(16, strLen-1, 0);
				break;
			case 'C':
				decEq+=12*powHex(16, strLen-1, 0);
				break;
			case 'D':
				decEq+=13*powHex(16, strLen-1, 0);
				break;
			case 'E':
				decEq+=14*powHex(16, strLen-1, 0);
				break;
			case 'F':
				decEq+=15*powHex(16, strLen-1, 0);
				break;

			default:
				printf("\nInvalid digit!!\n");
				return 0;
		}

		strLen--;
	}

	return decEq;
}
