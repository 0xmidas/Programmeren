#include <stdio.h>

int main(void) 
{
	int a1, a2, a3, cnt;

	printf("Input three characters: ");
	cnt = scanf("%d%d%d", &a1, &a2, &a3);
	printf("Number of succesful conversions: %d\n", cnt);
}