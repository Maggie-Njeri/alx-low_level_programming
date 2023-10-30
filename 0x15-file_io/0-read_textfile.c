#include "main.h"
#include <stdio.h>

/**
 * read_textfile - is used to read  text file and
 * prints it to the POSIX standard output.
 * @letters: is the number of letters it should read and print
 * @filename: is the file to be opened and read
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int g;
	ssize_t leggo, scrivo;
	char *bum;

	if (!filename)
		return (0);
	g = open(filename, O_RDONLY);

	if (g == -1)
		return (0);

	bum = malloc(sizeof(char) * (letters));
	if (!bum)
		return (0);

	leggo = read(g, bum, letters);
	scrivo = write(STDOUT_FILENO, bum, leggo);

	close(g);

	free(bum);

	return (scrivo);

}
