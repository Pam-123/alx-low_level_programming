#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_t - linked list structure
 * @str: string
 * @next: points to the next node
 */
typedef struct list_t
{
	char *str;
	struct list_t *next;
} list_t;

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			write(1, "(nil)", 5);
		}
		else
		{
			size_t i = 0;
			while (h->str[i] != '\0')
			{
				_putchar(h->str[i]);
				i++;
			}
		}

		count++;
		h = h->next;

		if (h != NULL)
		{
			write(1, ", ", 2);
		}
	}

	write(1, "\n", 1);

	return (count);
}

