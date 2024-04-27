#include "main.h"
/**
 * print_HEXA - converts a number to hex in uppercase
 * @ap: the arguments
 * @flags - flags to be considered
 * Return: the numbers
 */
int print_HEXA(va_list ap, flags_p *flag)
{
        unsigned int num = va_arg(ap, unsigned int);
        unsigned int temp = num;
        int i, *array;
        int count = 0;

        while (num / 16 != 0)
        {
                num /= 16;
                count++;
        }
        count++;
        array = malloc(count * sizeof(int));

        for (i = 0; i < count; i++)
        {
                array[i] = temp % 16;
                temp /= 16;
        }
        for (i = count - 1; i >= 0; i--)
        {
                if (array[i] > 9)
                        array[i] += 55;
                putcharr(array[i] + '0');
        }
        free(array);
        return(count);
}
