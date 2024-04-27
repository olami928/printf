#include "main.h"
/**
 * print_str - function to print a string
 * @ap: the arguments
 * @flags: flags considered
 * Return: the string
 */
int print_str(va_list ap, flags_p *flag)
{
        int count, index;
        char *str = va_arg(ap, char *);
        (void) flag;

        if (str == NULL)
        {
                str = "(null)";
        }
        count = _strlen(str);
        for (index = 0; index < count; index++)
        {
                putcharr(str[index]);
        }
        return (count);
}
