#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	argv++;
	if (!argv)
		printf("%i\n", 0);
	else
		printf("%i\n", argc - 1);

	return (0);
}
