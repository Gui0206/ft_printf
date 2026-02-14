#include "../inc/ft_printf.h"

int ft_printf_x(unsigned long nbr)
{
  int len;

  len = 0;
  if (nbr >= 16)
  {
    len += ft_printf_x(nbr / 16);
    len += ft_printf_x(nbr % 16);
  }
  else
    len += write(1, &"0123456789abcdef"[nbr], 1);
  return (len);
}