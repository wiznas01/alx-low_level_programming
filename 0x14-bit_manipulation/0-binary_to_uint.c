#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to string of 0 and 1 chracters
 * Return: converted number, 0 if invalid characters or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0')
		{
			result = (result << 1) | 0;
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
			return (0);
		b++;
	}
	return (result);
}
