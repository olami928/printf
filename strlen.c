#include "main.h"
/**
 * _strlen - returns length of a string
 * @str: the string
 * Return: the length
 */
int _strlen(char *str)
{
        int count;

        if (str == NULL)
        {
                return (NULL);
        }
        for (count = 0; str[count] != '\0'; count++)
        {
                str++;
        }
        return (count);
}
