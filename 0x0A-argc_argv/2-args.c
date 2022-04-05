#include <stdio.h>
/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
