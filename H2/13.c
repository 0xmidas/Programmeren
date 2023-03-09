#include <stdio.h>

int main(void) {
	int i = 0, power = 2048;

	for (;(power > 0); power /= 2)
		printf("%-6d", power);
}
