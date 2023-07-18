#include "main.h"
/**
 * _abs - entry point
 *
 * @r: value to be checked
 *
 * Return: absolute value of r
 */
int _abs(int r)
{
	int abs_val;

	if (r < 0)
	{
		abs_val = r * -1;
		return (abs_val);
	}
	else if (r >= 0)
	{
		return (r);
	}
}
