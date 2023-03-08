#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[100], age[100];

	printf("What is your name? ");
	scanf("%100s", name);

	printf("What is your age? ");
	scanf("%100s", age);

	int num = atoi(age);
	num++;

	printf("Hello %s, next year you will be %i\n", name, num);
	return 0;
}