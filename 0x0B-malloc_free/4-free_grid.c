#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memory of a grid
 * @grid: the grid to be freed
 * @height: of the grid
 * Return: nothing void
 */
void free_grid(int **grid, int height)
{

	int **tmp1, i;

	if (grid == NULL || height <= 0)
		return;
	i = 0;
	tmp1 = grid;
	while (i < height)
	{
		free(*tmp1);
		tmp1++;
		i++;
	}
	free(grid);
}
