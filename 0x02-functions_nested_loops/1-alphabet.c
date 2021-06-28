#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void print_alphabet(void);
int main()
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
