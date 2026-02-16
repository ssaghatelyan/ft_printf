#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, char case_)
{
	int		count;
	int		res;
	char	*base;

	if (case_ == 'X')
		base = "0123456789ABCDEF";
	else 
		base = "0123456789abcdef";
	count = 0;
	if (nb > 15)
	{
		res = ft_print_hex(nb / 16, case_);
		if (res == -1)
			return (-1);
		count += res;
	}
	if (write(1, &base[nb % 16], 1) == -1)
		return -1;
	return (count +  1);
}
