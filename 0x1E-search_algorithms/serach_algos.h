#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int help_binary(int *, int, size_t, size_t);
void array_print(int *, size_t, size_t);
int jump_search(int *, size_t, int);
int advanced_binary(int *, size_t, int);
int exponential_search(int *, size_t, int);

#endif
