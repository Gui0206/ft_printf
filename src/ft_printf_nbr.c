#include "../inc/ft_printf.h"

int ft_printf_nbr(int number)
{
  char  *str;
  int   len;

  len = 0;
  str = ft_itoa(number);
  len += ft_printf_str(str);
  free(str);
  return (len);
}