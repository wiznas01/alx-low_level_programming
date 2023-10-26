#include "main.h"

/**
 * get_endianness - checks for endianness of the system
 * Return: returns 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *checkendian = (char *)&num;

	return (*checkendian);
}
