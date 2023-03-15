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
int i;
int sum = 0;

if (argc <= 1)
        printf("0\n");

if (argc > 1)
{
	for (i = 1; i <= (argc - 1); i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);

	}
	printf("%d\n", sum);
}

return (0);

}
