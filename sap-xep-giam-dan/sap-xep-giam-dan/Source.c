#include <stdio.h>

void main()
{
	int a[] = { 0,5,1,7,22,8,11 };
	int a_num = sizeof(a) / sizeof(int);
	for (int i = 0; i < a_num - 1; i++)
	{
		for (int j = i + 1; j < a_num; j++)
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}

}