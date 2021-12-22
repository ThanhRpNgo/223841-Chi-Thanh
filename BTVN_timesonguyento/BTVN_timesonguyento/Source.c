#include <stdio.h>

void main()
{
	int a = 0;
	int b = 0;
	printf("nhap a= ");
	scanf_s("%d",&a);
	if (a < 2)
	{
		printf("khong phai so nguyen to \r\n");
	}
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			b++;
		}
	}
	if (b == 0) 
	{
		printf("la so nguyen to");
	}
	else
	{
		printf("khong phai la so nguyen to");
	}
}