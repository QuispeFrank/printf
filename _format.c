#include "main.h"

/**
 * format_s - give some format to the function
 * @argptr: the list of arguments to use
 * Return: return the lenght
 */
int format_s(va_list argptr)
{
	int len;
	int i;
	char *string1 = va_arg(argptr, char *);

	if (string1 == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	len = _strlen(string1);
	for (i = 0;  i < len; i++)
	{
		_putchar(string1[i]);
	}
	return (len);
}

/**
 * format_c - give some format to the function
 * @argptr: the list of arguments to use
 * Return: return the lenght
 */

int format_c(va_list argptr)
{
	char value = va_arg(argptr, int);

	_putchar(value);
	return (1);
}

/**
 * format_d - give some format to the function
 * @argptr: the list of arguments to use
 * Return: return the lenght
 */

int format_d(va_list argptr)
{
	int value = va_arg(argptr, int);

	return (number_printer(value));
}

/**
 * format_i - give some format to the function
 * @argptr: the list of arguments to use
 * Return: return the lenght
 */

int format_i(va_list argptr)
{
	int value = va_arg(argptr, int);

	return (number_printer(value));
}

/**
 * formato_valido - validate the format to print
 * @car_conversion: the caracter
 * @ptr_valist: the list of the argument
 * Return: return the lenght
 */

int formato_valido(char car_conversion, va_list ptr_valist)
{
	int a;
	int (*fun_ptr[])(va_list) =  {format_s, format_d, format_c, format_i};

	if (car_conversion == 's')
		a = (fun_ptr[0])(ptr_valist);
	if (car_conversion == 'c')
		a = (fun_ptr[2])(ptr_valist);
	if (car_conversion == 'd')
		a = (fun_ptr[1])(ptr_valist);
	if (car_conversion == 'i')
		a = (fun_ptr[3])(ptr_valist);
	return (a);
}
