#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);

/**
 * struct format_types - struct f tupes
 * @identifier: conversion specifier
 * @f: pointer fn
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);

} f_dt;
#endif
