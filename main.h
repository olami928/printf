#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list ap, flags_p *flag);
int print_str(va_list ap, flags_p *flag);
int print_bin(va_list ap, flags_p *flag);
int print_oct(va_list ap, flags_p *flag);
int print_hex(va_list ap, flags_p *flag);
int print_HEX(va_list ap, flags_p *flag);
int _strlen(char *str);
int putcharr(char c);
int print_string(va_list ap, flags_p *flag);
int reverse_string(va_list ap, flags_p *flag);
int print_STR(va_list ap, flags_p *flag);
~                                         
