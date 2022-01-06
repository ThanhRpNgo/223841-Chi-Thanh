#include <stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int nhap(int* arr, int arrsize)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < arrsize - 1; i++)
	{
		for (j = i + 1; j < arrsize; j++)
		{
			if (arr[i] > arr[j])
			{
				int mind = i;
				mind = j;
				swap(&arr[mind], &arr[i]);
			}
		}
	}
}
int xuat(int* arr, int arrsize)
{
	int i = 0;
	for (i = 0; i < arrsize; i++)
	{
		printf("%d", arr[i]);
	}
}

int main(void)
{
	int arr[] = { 24,11,2,3,4,5,6,7,8,9 };
	int arrsize = sizeof(arr) / sizeof(int);
	nhap(arr, arrsize);
	printf("thu tu tang dan la: \r\n");
	xuat(arr, arrsize);
	return 0;
}