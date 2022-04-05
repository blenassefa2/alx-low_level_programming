#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments passed to it
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 always (success)
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", *argv++);
	return (0);
}
