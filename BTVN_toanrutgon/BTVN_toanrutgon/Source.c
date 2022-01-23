#include <stdio.h>
#include <string.h>
#include <math.h>

int khaibao_UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}return a + b;
}
int khaibao_BC(int a, int b)
{
	return a * b / khaibao_UCLN(a, b);
}

typedef struct
{
	int mau;
	int tu;
}phan_so;

phan_so rutGon(phan_so a)
{
	phan_so c;
	c.tu = a.tu / khaibao_UCLN(a.tu, a.mau);
	c.mau = a.mau / khaibao_UCLN(a.tu, a.mau);
	return c;
}
phan_so phepchia(phan_so a, phan_so b)
{
	phan_so c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	c = rutGon(c);
	return c;
}
phan_so phepcong(phan_so a, phan_so b)
{
	phan_so c;
	c.tu = a.tu*b.mau + b.tu*a.mau;
	c.mau = a.mau * b.mau;
	c = rutGon(c);
	return c;
}


void print(phan_so a)
{
	printf("%d/%d", a.tu, a.mau);
}

int main()
{
	phan_so a, b, c;
	printf("nhap phan so cua a : ");
	scanf_s("\n%d\n%d", &a.tu, &a.mau);
	printf("nhap phan so cua b : ");
	scanf_s("\n%d\n%d", &b.tu, &b.mau);
	printf("result of division = ");
	c = phepchia(a, b);
	print(c);
	printf("\nresult of summation = ");
	c = phepcong(a, b);
	print(c);
}