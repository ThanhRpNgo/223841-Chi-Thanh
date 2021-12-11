#include <stdio.h>

void main()
{
	int a = 10;
	int b = 15;
	int sum = 0;
	for (int i = a; i < b; i++)
	{
		sum += i; // sum = sum +i
	}
	printf("sum = %d", sum);
};

void source()
{
	int num = 100;
	for (int i = 0; i < num; i++)
	{
		printf("%d \r\n", num);
	}
	printf("ket thuc chuoi lap");
}