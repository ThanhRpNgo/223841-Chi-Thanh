#include <stdio.h>

void main()
{
	int cot1, cot2;
	int hang1, hang2;
	int i = 0;
	int j = 0;
	int k = 0;
	int sum[100][100], a[100][100], b[100][100];
	printf("nhap so lieu cot 1 :");
	scanf_s("%d", &cot1);
	printf("nhap so lieu hang 1 :");
	scanf_s("%d", &hang1);

	printf("nhap so lieu cot 2 :");
	scanf_s("%d", &cot2);
	printf("nhap so lieu hang 2 :");
	scanf_s("%d", &hang2);

	if (cot1 != cot2 || hang1 != hang2)
	{
		printf("gia tri cua 2 ma tran khong dong nhat, vui long nhap lai! \r\n");
		printf("nhap so lieu cot 1 :");
		scanf_s("%d", &cot1);
		printf("nhap so lieu hang 1 :");
		scanf_s("%d", &hang1);

		printf("nhap so lieu cot 2 :");
		scanf_s("%d", &cot2);
		printf("nhap so lieu hang 2 :");
		scanf_s("%d", &hang2);
	}
	printf("cac gia tri cua ma tran 1 \r\n");
	for (i = 0; i < cot1; i++)
	{
		for (j = 0; j < hang1; j++)
		{
			printf("Nhap phan tu matrix1[%d][%d]: ", i, j);
			scanf_s("%2d", &a[i][j]);
		}
	}
	printf("gia tri cua ma tran 2 \r\n");
	for (i = 0; i < cot2; i++)
	{
		for (j = 0; j < hang2; j++)
		{
			printf("Nhap phan tu matrix2[%d][%d]: ", i, j);
			scanf_s("%2d", &b[i][j]);
		}
	}
	for (i = 0; i < cot1; i++)
	{
		for (j = 0; j < hang1; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("ket qua cua tong 2 ma tran \r\n" );;
	for (i = 0; i < cot1; i++)
	{
		for (j = 0; j < hang1; j++)
		{
			printf("%2d\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}