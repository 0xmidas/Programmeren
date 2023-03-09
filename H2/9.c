#include <stdio.h>
#include <math.h>

#define KG_PER_POUND 0.45359237
#define KG_PER_OUNCE 0.028349523125

int main(void) {
	float pounds, ounces;
	printf("Enter the pounds: ");
	scanf("%f", &pounds);
	printf("Enther the ounces: ");
	scanf("%f", &ounces);
	float kg = KG_PER_OUNCE * ounces + KG_PER_POUND * pounds;
	int kgs = (int) kg;
	int g = fmod(kg*1000, 1000);
	printf("Thats %i kg and %i grammes\n", kgs, g);
	return 0;
}