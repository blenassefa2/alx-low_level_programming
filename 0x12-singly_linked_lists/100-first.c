#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first -prints a sentence before main executes
 */
void first(void)
{
	printf("Your're beat! and yet, you must allow\n");
	printf("I bore my house up on my back!\n");
}
