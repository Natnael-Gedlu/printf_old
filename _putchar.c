#include <unistd.h>

/**
 * _putchar - putchar used for functions used 
 * in Project 0x11. C-printf
 * Team - Natnael Gedlu & Hlamulo Chauke.
 * @c: the character to print
 * Return: 0 on success and -1 error and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
