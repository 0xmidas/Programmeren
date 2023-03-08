#include <stdio.h>

int main(void)
{
	printf("::::: A TABLE OF POWERS :::::\n");
	printf("Integer    Square    3rd power    4th power    5th power\n");
	printf("-------    ------    ---------    ---------    ---------\n");
	for (int i = 1; i<10; i++) {
		printf("%7i%10i%13i%13i%13i\n", i, i*i, i*i*i, i*i*i*i, i*i*i*i*i);
	}
	return 0;
}