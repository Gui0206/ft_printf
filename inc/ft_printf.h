#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int ft_printf(const char *format, ...);

int ft_printf_format(char format, va_list arg);

int ft_printf_char(char c);
int ft_printf_str(char *str);
int ft_printf_nbr(int number);

int ft_printf_unsigned(unsigned int nbr);
int ft_printf_ptr(unsigned long long ptr);

int ft_printf_x(unsigned long nbr);
int ft_printf_x_uppercase(unsigned long nbr);

char *ft_itoa(int n);

#endif