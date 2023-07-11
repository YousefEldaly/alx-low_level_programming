#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text fiel and prints it to stdout
 * @filename: pointer to file name
 * @letters: letter size
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print.
 * else, (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letter, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	letter = read(file, txt, letters);

	w = write(STDOUT_FILENO, txt, letter);

	close(file);

	return (w);
}
