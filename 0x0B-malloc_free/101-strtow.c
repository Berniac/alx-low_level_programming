#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2-D grid
 *
 * @grid: 2-D array of integers
 * @height: Height of the grid
 * Return: Void.
 */
void free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits a string into words
 *
 * @str: string
 * Return: pointer to array of strings,
 * NULL if it fails
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;

	aout = malloc(sizeof(char *) * (height + 1));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return(NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc(sizeof(char) * (c - a1 + 2));
				if (aout[i] == NULL)
				{
					free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			aout[i][j] = str[a1];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}

