#ifndef _PRINTF_
#define _PRINTF_
	#include <unistd.h>
	#include <stdarg.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <limits.h>

	int _strlen(char *s);
	int _putchar(char c);
	int _printf(const char *format, ...);
	int intermediate(int inicio, int fin, const char *format, va_list ptr_valist);
	char *sintax(int inicio, int fin, const char *all_string);
	int validation(char *formato_a_validar);
	int formato_valido(char car_conversion, va_list ptr_valist);
	int number_printer(int n);
#endif
