#include "main.h"
/**
 * print_char - a function to print a char
 * @ap: arguments passed
 * @flag: flags to be considered while printing
 * Return: char printed
 */
int print_char(va_list ap, flags_p *flag)
{
        char c = va_arg(ap, int);
        (void) flag;

        putcharr(c);
        return (1);
}
