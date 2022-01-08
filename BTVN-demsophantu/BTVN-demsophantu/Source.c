#include<stdio.h>
#include <string.h>


int Cout(char* str, int length)
{
	int sum = (str[0] != ' ');
	for (int i = 0; i < length - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			sum++;
		}
	}
	return sum;
}

void main()
{
	int str[300];
	printf("nhap gia tri: \r\n");
	int length = sizeof(str) / sizeof(int);
	fflush(stdin);
	fgets(str, sizeof str, stdin);
	printf("so chu cai la : %d", Cout(str, length));
	return 0;

}