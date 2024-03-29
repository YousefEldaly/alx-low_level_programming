#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to filename
 * @text_content: content of the file
 * Return: 1 (Success).
 * else, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
