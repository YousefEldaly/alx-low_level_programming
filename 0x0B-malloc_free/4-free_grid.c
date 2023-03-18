#include "main.h"
/**
 * free_grid - free a 2d grid
 * @grid: pointer to grid
 * @height: grid height
 * Return: Always 0 (sucees)
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
		return;
	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
