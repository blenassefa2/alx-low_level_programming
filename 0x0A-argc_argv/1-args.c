#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed to it
 *
 * Return - 0 always (success)
 */
int main (int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
