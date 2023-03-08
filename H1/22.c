#include <ctype.h>
#include <stdio.h>

#define   MAXSTRING   100

int main(void)
{
    FILE* ptr;
    char ch;
    int c = 0;
 
    // Opening file in reading mode
    ptr = fopen("22in.txt", "r");

    while (ch != EOF) {
    	ch = fgetc(ptr);
    	c++;
    }
    printf("%i", c);
    return 0;
}