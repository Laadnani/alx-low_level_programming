#include "main.h"

/**
 * set_string - set the value of a pointer to a string
 *
 * @s: pointer of a pointer
 * @to: pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
