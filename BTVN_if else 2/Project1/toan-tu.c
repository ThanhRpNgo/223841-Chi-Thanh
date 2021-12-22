#include <stdio.h>
void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("nhap cho du lieu a: ");
	scanf_s("%d", &a);
	printf("nhap cho du lieu b: ");
	scanf_s("%d", &b);
	printf("nhap cho du lieu c: ");
	scanf_s("%d", &c);
	int delta = b * b - 4*a*c;
	if (delta < 0)
	{
		printf("phuong trinh vo nghiem");

	}
	else if (delta > 0)
	{
		printf("phuong trinh co 2 nghiem phan biet");
	}
	
	else
	{
		printf("phuong trinh co 1 nghiem chung");
	}

}