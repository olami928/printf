#include "main.h"
/**
 * putcharr - function that prints a char
 * @C: the char to be printed
 * Return: 0 on success
 */
int putcharr(char c)
{
        return (write(1, &c, 1));
}
