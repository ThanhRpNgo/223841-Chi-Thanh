#include <stdio.h>

void main()
{
	unsigned short x = 0;
	unsigned short y = 0;
	unsigned short low = 0xabcd;
	unsigned short high = 0xabcd;
	x = low >> 8;
	y = high << 8;
	printf("value: %x\r\n", x);
	printf("value: %x\r\n", y);

}