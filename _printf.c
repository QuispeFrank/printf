#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: The String to print.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, inicio = -1, fin = -1, string_lenght = 0;
	char conversion[] = "csdi";
	va_list argptr;

	va_start(argptr, format);
	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				string_lenght--;
			inicio = i;
			if (format[i + 1] == '%')
			{	inicio = -1;
				_putchar(format[i]);
				string_lenght++;
				i++;	}
			else
			{
				for (; format[i] ; i++)
				{
					for (j = 0; j < 4; j++)
					{
					if (format[i] == conversion[j] || format[i + 1] == '\0')
					{
					fin = i;
					if (fin == inicio)
						return (-1);
					string_lenght += intermediate(inicio, fin, format, argptr);
					break;	}
					}
					if (fin != -1)
					{	inicio = -1;
						fin = -1;
						break;	}	}	}	}
			else
			{	_putchar(format[i]);
				string_lenght++;	}	}
return (string_lenght);	}
