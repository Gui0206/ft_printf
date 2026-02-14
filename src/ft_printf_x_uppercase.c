#include "../inc/ft_printf.h"

int ft_printf_x_uppercase(unsigned long nbr)
{
  int len;

  len = 0;
  if (nbr >= 16)
  {
    len += ft_printf_x_uppercase(nbr / 16);
    len += ft_printf_x_uppercase(nbr % 16);
  }
  else
    len += write(1, &"0123456789ABCDEF"[nbr % 16], 1);
  return (len);
}