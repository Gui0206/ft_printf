#include "../inc/ft_printf.h"

static size_t	ft_intlenght(int c)
{
	size_t	ret;

	ret = 0;
	if (c <= 0)
		ret++;
	while (c)
	{
		c = c / 10;
		ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	lenght;
	size_t	i;
	long	number; // Usamos long para evitar o erro do -2147483648

	number = n;
	lenght = ft_intlenght(n);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (NULL);
	str[lenght] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
		i = 1;
	}
	else
		i = 0;
	while (lenght-- > i)
	{
		str[lenght] = (number % 10) + 48;
		number = number / 10;
	}
	return (str);
}