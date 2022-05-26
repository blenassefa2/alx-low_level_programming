/**
 * _islower - is a function that checks if argument is lowercase
 * @c: the input
 * Return:1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 103)
		return (1);
	return (0);
}
