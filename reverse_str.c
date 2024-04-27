#include "main.h"
/**
 * print_reverse - prints a string in reverse
 * @ap: the arguments
 * @flag: flgas to be considered
 * Return: the number of char
 */
int print_reverse(va_list ap, flags_p *flag)
{
        int count, index;
        char *str = va_arg(ap, char *);
        (void) flag;

        if (str == NULL)
        {
                str = "(null)";
        }
        count = _strlen(str);
        for (index - 1; index >= 0; index--)
        {
                putcharr(str[index]);
        }
        return (count);
}
