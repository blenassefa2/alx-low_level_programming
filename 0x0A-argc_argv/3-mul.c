#include <stdio.h>
/**
 *_atoi - converts the first numbers found in to integers
 *@s: the input from which an integer is extracted
 *Return: extracted integer
 */
int _atoi(char *s)
{
	int sign, digit, ans, x;
	char *p;

	digit = 0;
	sign = 1;
	for (p = s; *p != '\0'; p++)
	{
		if (*p == '-')
			sign = -1;
		if (*p >= '0' && *p <= '9')
			digit++;
	}
	x = 1;
	ans = 0;
	for (p = p - 1; digit > 0; digit--)
	{
		int temp;

		temp = (int)(*p) - (int)('0');
		ans += (sign * (temp * x));
		if (x < 1000000000)
			x *= 10;
		p--;
	}
	return (ans);
}
/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: list of arguments
 * Return: 0 (success) or 1 (fail)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	printf("%i\n", a * b);

	return (0);
}
