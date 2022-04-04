#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for grid
 * @width: width of the grid
 * @height: of the grid
 * Return: 2d grid
 */
int **alloc_grid(int width, int height)
{

	int **grid, **tmp1, *tmp2, i, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	tmp1 = grid;
	for (i = 0; i < height; i++)
	{
		*tmp1 = malloc(sizeof(int) * width);
		if (*tmp1 == NULL)
			return (NULL);
		tmp2 = *tmp1;
		for (x = 0; x < width; x++)
		{
			*tmp2 = 0;
			tmp2++;
		}
		tmp1++;
	}
	return (grid);
}
