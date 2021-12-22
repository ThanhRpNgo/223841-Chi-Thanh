#include <stdio.h>

void main()
{
	unsigned short value = 0xabcd;
	unsigned char high = (unsigned char)(value >> 8);
	unsigned char low = (unsigned char)(value);
}