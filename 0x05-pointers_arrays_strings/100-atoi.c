#include <stdio.h>
#define INT_MAX 2147483648
#define INT_MIN -2147483648
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
		if (digit > 0 && (*p > '9' || *p < '0'))
			break;
		if (*p >= '0' && *p <= '9')
			digit++;
		if (*p == '-')
			sign *= -1;
	}
	x = 1;
	ans = 0;
	for (p = p - 1; digit > 0; digit--)
	{
		int temp;

		temp = (int)(*p) - (int)('0');
		ans += (temp * x);
		if (x < 1000000000)
			x *= 10;
		p--;	
	}
	if (ans == INT_MAX && sign == -1)
		return (INT_MIN);
	return (sign * ans);
}
