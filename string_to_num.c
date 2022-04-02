#include "main.h"

/**
 * digits_counter - get digit's size of a number.
 * @n: number to be tested.
 * Return: length of @n.
 */
int digits_counter(int n)
{
	int i = 0;

	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	for (; n; i++)
		n = n / 10;

	return (i);
}




/**
 * number_printer_B - number_printer_B
 * @n: n
 * @v_ah: v_ah
 * @zeros: zeros
 * Return: ~to change
 */

void number_printer_B(int n, int v_ah, int zeros)
{
	int i;

	/* imprime los numeros */
	for (i = 0; n; i++)
	{
		v_ah = v_ah / 10;

		/* ajustando el numero de digitos en v_ah */
		while (v_ah > n)
		{
			v_ah = v_ah / 10;
		}

		_putchar((n / v_ah) + 48);

		/* caso de ceros intermedios */
		zeros = v_ah / 10;
		while ((zeros > (n % v_ah)))
		{
			if (zeros > (n % v_ah))
			{
				_putchar('0');
				zeros = zeros / 10;
			}
			else
				break;
		}

		n = n % v_ah;
	}
}

/**
 * number_printer - functions that prints an integer as a string.
 * @n: number to be printed.
 * Return: 1 (to change)
 */
int number_printer(int n)
{
	int zeros = 0, v_ah = 1, digits = 0;
	
	if (n == MAX_INT)
	{

	}

	/* funcion que cuenta el numero de digitos */
	digits = digits_counter(n);

	/* validacion numeros negativos */
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	/* validacion n es 0 o 1 */
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return (digits);
	}

	/* obtiene el numero de digitos del numero aumentado en 1 */
	while (v_ah < n)
	{
		v_ah = v_ah * 10;

		/* correccion del caso v_ah = n -- parte A */
		if (v_ah == n)
		{
			v_ah *= 10;
			break;
		}

		if (v_ah > n)
		{
			break;
		}
	}
	/* funcion de impresion */
	number_printer_B(n, v_ah, zeros);
	return (digits);
}
