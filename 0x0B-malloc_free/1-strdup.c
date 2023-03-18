#include "main.h"
/**
 * _strdup - copies a string
 * @str: string
 * Return: pointer to the sting copy
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	ptr = (char *)malloc((len + 1) * sizeof(char));

	if (!ptr)
		return (ptr);

	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
