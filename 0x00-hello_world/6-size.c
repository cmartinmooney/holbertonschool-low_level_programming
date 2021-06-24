#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int int1;
float float2;
double double3;
char char4;

printf("Size of int: %zu bytes\n", sizeof(int1));
printf("Size of float: %zu bytes\n", sizeof(float2));
printf("Size of double: %zu bytes\n", sizeof(double3));
printf("Size of char: %zu bytes\n", sizeof(char4));

return(0);
}
