#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (Succes), 1 if and argv not a num
 */
int main(int argc, char *argv[])
{
int i, j, len, sum = 0;
char *pChar;

if (argc <= 1)
	printf("0\n");

else
{
	for (i = 1; i < argc; i++)
	{
		pChar = argv[i];
		len = strlen(pChar);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(*(pChar + j)))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
}

return (0);

}
