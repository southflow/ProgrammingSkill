#include <stdio.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void SelectSort(int *arr, int n)
{
	if (n <= 1)
		return;
	for (int i = 1; i < n; i++)
	{
		int min = i - 1;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (i - 1 != min)
			swap(&arr[i - 1], &arr[min]);		

	}
}

void Output(int *arr, int n)
{
	for(int i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {9,4,6,2,1,3};
	SelectSort(arr, 6);
	Output(arr, 6);
    return 0;
}

