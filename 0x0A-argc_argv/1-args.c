#include <stdio.h>

/**
 * main - Entry of the Program
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: 0
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
	if (count > 0)
	{
		printf("Arguments provided.\n");
	}
	else
	{
		printf("Arguments not provided.\n");
	}

	return (0);
}

