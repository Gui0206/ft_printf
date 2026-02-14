#include "../inc/ft_printf.h"

int ft_printf_unsigned(unsigned int nbr)
{
  int len;

  len = 0;
  if (nbr <= UINT_MAX)
  {
    if(nbr >= 10)
    {
      len += ft_printf_unsigned(nbr / 10);
      len += ft_printf_unsigned(nbr % 10);
    }
    else
      len += ft_printf_char(nbr + '0');
    return (len);
  }
  return (0);
}