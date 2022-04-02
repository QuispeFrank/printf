#include "main.h"

/**
 * sintax - funcion que obtiene y guarda en un malloc
 * el formato a ser validado.
 *
 * @inicio: inicio del formato dentro de all_string.
 * @fin: posicion final dentro de all_string.
 * @all_string: string que contiene todo el formato original.
 * Return: el puntero al malloc.
 */

char *sintax(int inicio, int fin, const char *all_string)
{
	int i, size_malloc;
	char *pt_malloc;

	size_malloc = fin - inicio + 2;
	pt_malloc = malloc(sizeof(char) * size_malloc);
	for (i = 0; i < size_malloc; i++)
		pt_malloc[i] = all_string[inicio + i];
	return (pt_malloc);
}
