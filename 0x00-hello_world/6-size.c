#include <stdio.h>
/**
 * main - A C program that prints the size of compiled computer
 * Description: 'The program displays the sizes of the data types'
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float int: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
