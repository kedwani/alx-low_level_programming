#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int *p;
	int i;
/* check for hight or width == null */
	if (width <=0 || height <=0)
		return (NULL);
/*allocat height*/
	arr*= malloc(height);
	for (i = 0; i < height; ++i)
		malloc() 


}
