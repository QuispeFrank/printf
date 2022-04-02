#include "main.h"

/**
 * validation - funcion que valida por el formato correcto.
 *
 * @formato_a_validar: puntero hacia el formato a validar.
 *
 * Return: 1 si es un formato valido, 0 caso contrario.
 */
int validation(char *formato_a_validar)
{
	int i;
	char conversores[] = "scdi";
	/* tamaño mayor a 2 = sintaxis incorrecta */
	if ((_strlen(formato_a_validar) - 1) > 2)
		return (0);

	/* busqueda del caracter de conversion */
	for (i = 0; conversores[i]; i++)
	{
		if (formato_a_validar[1] == conversores[i])
			return (1);
	}
	return (0);
}
