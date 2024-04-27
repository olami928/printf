#include "main.h"
/**
 * print_STR - prints an uppercase string format specifier
 * @ap: the arguments
 * @flag: the flag to be considered
 * Return: the printed string
 */
int print_STR(va_list ap, flags_p *flag)
{
        int count = 0;
        int index;
        char *str = va_arg(ap, char *);
        (void) flag;

        if (str == NULL)
        {
                str = "(null)";
        }
        for (index = 0; str[index] != '\0'; index++)
        {
                if (str[index] > 0 && (str[index] < 32 || str[index] > 127))
                {
                        putcharr('\\');
                        putcharr('x');
                        if (str[index] < 16)
                        {
                                count += putcharr('0');
                        }
                        count += print_HEXA((unsigned int)str[index]);
                }
                else
                        count += putcharr(str[index]);
        }
        return (count);
}
