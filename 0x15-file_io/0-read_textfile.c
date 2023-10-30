#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the given file to create, read and print to stdout
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t textfile, textread, textwrite;
	char *texts;

	if (filename == 0)
		return (0);
	texts = malloc(letters);
	if (!texts)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile == -1)
	{
		free(texts);
		return (0);
	}
	textread = read(textfile, texts, letters);
	textwrite = write(STDOUT_FILENO, texts, textread);
	close(textfile);
	return (textwrite);
}
