#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_print_hex(address, 'x');
	return (count);
}
