#include "../inc/ft_printf.h"

int ft_printf_ptr(unsigned long long ptr)
{
  int len;

  len = 0;
  if (ptr != '\0')
  {
    len += write(1, "0x", 2);
    len += ft_printf_x(ptr);
    return (len);
  }
  len += write(1, "0x0", 3);
  return (len);
}