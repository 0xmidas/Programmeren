#include <stdio.h>

int main()
{
	double miles, yards;
	double kilometers;

	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %f kilmoters.\n\n", kilometers);
}


