#include "main.h"
/**
 * print_bin - converts a number to binary
 * @ap: the arguments
 * @flags - flags to be considered
 * Return: the numbers
 */
int print_bin(va_list ap, flags_p *flag)
{
        unsigned int num = va_arg(ap, unsigned int);
        unsigned int temp = num;
        int i, *array;
        int count = 0;

        while (num / 2 != 0)
        {
                num /= 2;
                count++;
        }
        count++;
        array = malloc(count * sizeof(int));

        for (i = 0; i < count; i++)
        {
                array[i] = temp % 2;
                temp /= 2;
        }
        for (i = count - 1; i >= 0; i--)
        {
                putcharr(array[i] + '0');
        }
        free(array);
        return(count);
}
