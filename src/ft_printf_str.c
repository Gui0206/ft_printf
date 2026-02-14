#include "../inc/ft_printf.h"

int ft_printf_str(char *str)
{
  int len;

  len = -1;
  if (str == NULL)
    return (write (1, "(null)", 6));
  while (str[++len])
    write(1, &str[len], 1);
  return(len);
}