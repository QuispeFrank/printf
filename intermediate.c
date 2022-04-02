#include "main.h"

/**
 * intermediate - function that give as the lenght of the especial character
 * @inicio: index of the % character
 * @fin: index of the convertion caracter
 * @format: string to be evaluated
 * @ptr_valist: the list of parameters enter for the user
 * Return: el numero de caracteres a imprimir(valido o invalido)
 */

int intermediate(int inicio, int fin, const char *format, va_list ptr_valist)
{
	char *formato_recortado;
	char car_conversion = (format[fin]);
	int validate;
	int len;
	int i;

	formato_recortado = sintax(inicio, fin, format);
	validate = validation(formato_recortado);
	if (validate == 0)
	{
		len = _strlen(formato_recortado);
		for (i = 0;  i < len; i++)
		{
			_putchar(formato_recortado[i]);
		}
		return (len);
	}
	else
		len = formato_valido(car_conversion, ptr_valist);
	free(formato_recortado);
	return (len);
}
