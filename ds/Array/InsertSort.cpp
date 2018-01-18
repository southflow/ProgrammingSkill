#include <stdio.h>

void InsertSort(int *arr, int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int temp = arr[i];
		for (j = i-1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
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
	InsertSort(arr, 6);
	Output(arr, 6);
    return 0;
}

