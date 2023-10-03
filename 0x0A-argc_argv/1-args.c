#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i;
	(void) argv;

	for (i = 1; i < argc; ++i)
	{
		count++;
	}
	printf("%d\n", count); /* Print the number of arguments (excluding the program name) */

	return (0);
}
