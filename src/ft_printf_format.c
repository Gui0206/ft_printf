#include "../inc/ft_printf.h"

int ft_printf_format(char format, va_list arg)
{
  int len;

  len = 0;
  if (format == 'c')
    len += ft_printf_char(va_arg(arg, int));
  else if (format == 's')
    len += ft_printf_str(va_arg(arg, char *));
  else if (format == 'p')
    len += ft_printf_ptr(va_arg(arg, unsigned long long));
  else if (format == 'd' || format == 'i')
    len += ft_printf_nbr(va_arg(arg, int));
  else if (format == 'u')
    len += ft_printf_unsigned(va_arg(arg, unsigned int));
  else if (format == 'x')
    len += ft_printf_x(va_arg(arg, unsigned int));
  else if (format == 'X')
    len += ft_printf_x_uppercase(va_arg(arg, unsigned int));
  else if (format == '%')
    len += write(1, "%", 1);
  return (len);
}