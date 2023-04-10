#ifndef MAIN
#define MAIN

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct ssize_tt - return value
 * @n: return value
 *
 * Description: Return value structure
 */

/**
typedef struct ssize_tt
{
	unsigned int n;
} ssize_t;
*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
