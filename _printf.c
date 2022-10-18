#include "main.h"

/**
 * _printf - a Printf function
 * @format: a character string.
 *
 * Return: printed_chars.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags = 0, width = 0, precision = 0, size = 0;
	int buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer.
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char.
 *
 * Return: nothing.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
