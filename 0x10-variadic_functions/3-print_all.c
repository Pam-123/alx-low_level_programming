#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @args: Argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: Argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: Argument list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string (or (nil) if string is NULL)
 * @args: Argument list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything based on the format string
 * @format: List of types of arguments passed to the function
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separators[] = {"", ", "};

	print_func formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].type)
		{
			if (formats[j].type == format[i])
			{
				formats[j].func(args);
				printf("%s", separators[format[i + 1] != '\0']);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}
