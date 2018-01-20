#include <stdio.h>
#define ASCII_SIZE 256

char MaxOccuringChar(char *str, int n)
{
	int count[ASCII_SIZE] = { 0 };
	char chr;
	int cnt = -1;
	for (int i = 0; i < n; i++)
	{
		if (++count[str[i]] > cnt)
		{
			chr = str[i];
			cnt = count[str[i]];
		}
	}
	return chr;
}

int main()
{
	char arr[] = {'a', 'b','c', 'b', 'f', 'c', 'c'};
	printf("%c\n", MaxOccuringChar(arr, 7));
	return 0;
}

