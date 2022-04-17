#include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
	if (accept)
		return (accept);
	return (s);
}
