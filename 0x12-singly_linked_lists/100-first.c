#include "main.h"

/**
 * print_before_main - Function that prints a message before main is executed.
 *
 * Description: This function is executed automatically before main() is called.
 * It prints two messages to the standard output.
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	char *message1 = "You're beat! and yet, you must allow,\n";
	char *message2 = "I bore my house upon my back!\n";

	for (int i = 0; message1[i] != '\0'; i++)
	{
		_putchar(message1[i]);
	}

	for (int i = 0; message2[i] != '\0'; i++)
	{
		_putchar(message2[i]);
	}
}

