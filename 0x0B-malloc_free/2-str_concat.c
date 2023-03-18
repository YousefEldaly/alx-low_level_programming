#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int str1len, str2len, i = 0;
	char *catptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	str1len = strlen(s1);
	str2len = strlen(s2);
	catptr = (char *)malloc(sizeof(char) * (str1len + str2len + 1));

	if (!catptr)
		return (catptr);
	while (s1 != '\0')
	{
		catptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		catptr[i] = *s2;
		i++;
		s2++;
	}

	return (catptr);
}
