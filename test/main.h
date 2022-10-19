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

int _putchar(char c);
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);

#endif
