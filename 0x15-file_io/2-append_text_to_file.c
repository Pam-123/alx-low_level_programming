#include "main.h"

/**
 * append_text_to_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int textfile;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
	;
	textfile = open(filename, O_WRONLY | O_APPEND);
	if (textfile == -1)
		return (-1);
	write(textfile, text_content, i);
	return (1);
}
