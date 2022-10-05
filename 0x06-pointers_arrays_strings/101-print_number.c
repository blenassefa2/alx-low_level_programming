#include <unistd.h>
/**
 * _putchar - writes the input char to stdout
 * @c: input to write
 *
 * Return: on cuccess 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_number - prints an ineger;
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;

	if ((n1 / 10) > 0)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
