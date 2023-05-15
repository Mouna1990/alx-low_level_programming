#include <stdlib.h>
#include "main.h"
/**
* free_grid - Frees a 2dm grid previously created by alloc_grid.
* @grid: Pointer to the 2dm grid.
* @height: Height of the grid.
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
