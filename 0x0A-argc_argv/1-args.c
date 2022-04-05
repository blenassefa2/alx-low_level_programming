#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%i\n", 0);
	else
		for (i = -1; *argv; i++, argv++)
			;
		printf("%i\n", i);

	return (0);
}
