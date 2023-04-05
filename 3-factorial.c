#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return 0;
	else if (n < 0)
		return -1;
	else 
		return (n * factrial(n-1));
}
