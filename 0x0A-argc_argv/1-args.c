#include <stdio.h>
/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	printf("%i\n", (argc * 1) - 1);

	return (0);
}
