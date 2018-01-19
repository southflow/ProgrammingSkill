#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSinkSort(int *arr, int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void BubbleFloatSort(int *arr, int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = n - 1; j >= i; j--)
		{
			if (arr[j] < arr[j - 1])
				swap(&arr[j], &arr[j - 1]);
		}
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
	BubbleSinkSort(arr, 6);
	Output(arr, 6);
	int arr1[] = { 9,4,6,2,1,3 };
	BubbleFloatSort(arr1, 6);
	Output(arr1, 6);
	return 0;
}

