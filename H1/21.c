#include <stdio.h>

int main(void) {
	char c1, c2, c3;
	int cnt;
	printf("Input three characters:  ");
	cnt = scanf("%c%c%c", &c1, &c2, &c3);
	printf("%c", c1);
	printf("\nNumber of succesful conversions %d\n", cnt);
	return 0;
}