#include <stdio.h>

void main()
{
	unsigned short x = 0;
	unsigned short y = 0;
	unsigned short high = 0xabcd;
	unsigned short low = 0xabcd;
	x = high >> 8;
	y = low << 8;
	printf("value: %x\r\n", x);
	printf("value: %x\r\n", y);

}