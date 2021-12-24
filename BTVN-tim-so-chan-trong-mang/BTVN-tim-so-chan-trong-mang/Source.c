#include <stdio.h>
#include <math.h>
/* chuc nang tim so le
   input: + dia chi -int 
          + tim so le trong mang -if
		  + do dai cua mang -int 
   Output: int- gia tri co so chan chia het cho 2
*/
int mang1(int* arr, int arrsize)
{
	
	for (int i = 0; i < arrsize; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf(" %2d la so chan \r\n", arr[i]);
		}

	}return 0;
}




void main()
{
	int arr[10] = { 2,6,8,13,14,16,22,18,10,76 };
	int x = mang1(arr, 10);
}