#include <stdio.h>

void Reverse(char *str, int n)
{
	char c;
	for (int i = 0; i < (n - 1) / 2; i++)
	{
		c = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = c;
	}
}

int main()
{
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	Reverse(arr, 6);
	return 0;
}

