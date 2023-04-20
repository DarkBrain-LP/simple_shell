#include "shell.h"

/**
 * bfree - frees a pointer and NULLs
 * @ptr: address of the pointer to free in memory
 *
 * Return: 1 if free, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
