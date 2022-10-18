#include <unistd.h>

/**
 * _putchar - putchar used for functions used 
 * in Project 0x11. C-printf
 * Team - Natnael Gedlu & Hlamulo Chauke.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
