#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
		printf("size of long long int: %i bytes(s)\n", sizeof(long long int));
		printf("size if a float: %i bytes(s)\n", sizeof(float));
		return (0);
}
