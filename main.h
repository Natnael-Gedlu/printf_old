#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main.h - header file containing prototypes for functions used
 * in Project 0x11. C-printf
 * Team - Natnael Gedlu & Hlamulo Chauke.
 */

int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);

