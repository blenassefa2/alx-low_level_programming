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
		if (*p > '9' || *p < '0')
			return (-1);
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
 * main - adds all the arguments
 * @argc: the number of arguments
 * @argv: list of arguments
 * Return: 0 (success) or 1 (fail)
 */
int main(int argc, char *argv[])
{
	int sum, counter;
	char **tmp;

	sum = 0;
	counter = argc - 1;
	tmp = argv + 1;
	while (counter--)
	{
		int x;

		x = _atoi(*(tmp++));
		if (x == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += x;
	}
	printf("%i\n", sum);
	return (0);
}
