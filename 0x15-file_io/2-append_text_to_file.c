#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - is used to append text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	int x;
	int scrivere;

	if (!filename)
		return (-1);

	g = open(filename, O_WRONLY | O_APPEND);
	if (g == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x]; x++)
			;
		scrivere = write(g, text_content, x);

		if (scrivere == -1)
			return (-1);
	}

	close(g);
	return (1);
}
