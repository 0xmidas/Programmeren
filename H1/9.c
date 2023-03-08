#include <stdio.h>

#define BOTTOM_SPACE "\n\n\n\n\n"
#define HEIGHT 14
#define OFFSET "                 " /* 17 blanks */
#define TOP_SPACE "\n\n\n\n\n"

int main(void)
{
	int i;

	printf(TOP_SPACE);
	printf(OFFSET "IIIIIIIIIIIIIIIIIIIIIIII\n");
	printf(OFFSET "IIIIIIIIIIIIIIIIIIIIIIII\n");
	printf(OFFSET "IIIIII                II\n");
	printf(OFFSET "IIII                   I\n");
	for (i=0; i < HEIGHT; ++i) 
		printf(OFFSET "IIII\n");
	printf(OFFSET "IIII                   I\n");
	printf(OFFSET "IIIIII                II\n");
	printf(OFFSET "IIIIIIIIIIIIIIIIIIIIIIII\n");
	printf(OFFSET "IIIIIIIIIIIIIIIIIIIIIIII\n");
	printf(BOTTOM_SPACE);
	return 0;
}
