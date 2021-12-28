#include <stdio.h>
#include <math.h>


int main(void)
{
	int n = 0;
	int mark = 0;
	printf("vui long nhap so lieu! \r\n");
	scanf_s("%d", &n);
	if (n <= 2)
	{
		printf("so lieu khong dung, vui long nhap lai! \r\n");
		scanf_s("%d", &n);

	}
	
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			mark++;
		}
	}
		if (mark == 0)
		{
			printf("day la so nguyen to \r\n!");
		}
		else
		{
			printf("day khong phai la so nguyen to! \r\n"); 
		}
	
	return 0;
}


