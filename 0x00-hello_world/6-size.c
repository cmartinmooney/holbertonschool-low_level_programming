#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char char1;
int int2;
long int longint3;
long long int longlongint4;
float float5;

printf("Size of a char: %zu bytes\n", sizeof(char1));
printf("Size of an int: %zu bytes\n", sizeof(int2));
printf("Size of a long int: %zu bytes\n", sizeof(longint3));
printf("Size of a long long int: %zu bytes\n", sizeof(longlongint4));
printf("Size of a float: %zu bytes\n", sizeof(float5));

return(0);
}
