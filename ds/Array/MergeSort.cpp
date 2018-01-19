#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Merge(int *arr, int l, int m, int r)
{
	int i, j, k;
	int *temp = (int *)malloc(sizeof(int) * (r - l + 1));
	for (i = l; i <= r; i++)
		temp[i - l] = arr[i];

	k = l; i = 0; j = m + 1 - l;
	while (i <= m - l && j <= r - l)
		temp[i] <= temp[j] ? arr[k++] = temp[i++]:arr[k++] = temp[j++];

	while(i <= m - l) arr[k++] = temp[i++];
	while(j <= r - l) arr[k++] = temp[j++];
	free(temp);
}

void MergeSort(int *arr, int l,  int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);
		Merge(arr, l, m, r);
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
	int arr[] = {4, 6,9, 7, 1, 2 ,3};
	MergeSort(arr, 0, 5);
	Output(arr, 6);
	return 0;
}

