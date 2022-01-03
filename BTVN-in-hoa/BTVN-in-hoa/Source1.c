#include<stdio.h>
#include <string.h>

char *nhap(char *A)
{
	size_t length = strlen(A);
	char* ketQua = malloc(length);
	char space = ' ';
	if (A[0] != space && A[0] >= 97)
	{
		ketQua[0] = A[0] - 32;
	}
	else
	{
		ketQua[0] = A[0] - 0;
	}
		for (int i = 1; i < strlen(A); i++)
	{
		ketQua[i] = A[i];
		if (A[i] == space && A[i + 1] != space && A[i + 1] >= 97)
		{
			ketQua[i + 1] = A[i + 1] - 32;
			i++;
		}
	}
	ketQua[length] = '\0';

	return ketQua;
}




int main(void)
{
	int  A[300] ;
	printf("vui long nhap ki tu: \r\n");
	fflush(stdin);
	fgets(A, 300, stdin);
	printf("xuat: \r\n");
	char *ketQua = nhap(A);

	puts(ketQua);

}