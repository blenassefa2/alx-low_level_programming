#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 *@argc: the number of arguments passed
 *@argv: arguments
 * Return: 0 always (success)
 */
int main (int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
