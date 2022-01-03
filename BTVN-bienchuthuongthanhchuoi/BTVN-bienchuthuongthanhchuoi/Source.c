#include <stdio.h>
#include <string.h>
#include <malloc.h>

int* nhap(char* A)
{
	size_t length = strlen(A);
	char* ketQua = malloc(length);
	int space = ' ';
	if (A[0] != space && A[0] >= 97)
	{
		ketQua[0] = A[0] - 32;
	}
	else
	{
		ketQua[0] = A[0];
	}
	
	for (int i = 1; i < length; i++)
	{
		if (A[i] != space && A[i] >= 97)
		{
			ketQua[i] = A[i] - 32;
		}
		else
		{
			ketQua[i] = A[i];
		}
	}
	ketQua[length] = '\0';
	return ketQua;
}
int main(void)
{
	char A[300];
	printf("nhap cac ky tu: \r\n");
	fflush(stdin);
	fgets(A, 300, stdin);
	printf("xuat: ");

	char* ketQua = nhap(A);

	puts(ketQua);
}