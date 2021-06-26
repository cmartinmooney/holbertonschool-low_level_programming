#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

	printf("lastDigit = n");
	if (n > 5)

        {
        printf("%d n  and is greater than 5\n", n);
        }
	else if (n == 0)

        {
         printf("%d n and is 0\n", n);
        }
        else

        {
        printf("%d n and is less than 6 and not 0\n", n);
        }
return (0);
}
