#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * create_file - is used to create a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure
 *  (file can not be created, file can not
 *  be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int g;
	int x;
	int scrivere;

	if (!filename)
		return (-1);

	g = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (g == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;
	scrivere = (g, text_content, x);

	if (scrivere == -1)
		return (-1);

	close(g);

	return (1);

}
