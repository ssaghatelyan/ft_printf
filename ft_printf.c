#include "ft_printf.h"

static int	ft_conversion(char type, va_list vargs)
{
	if (type == 'c')
		return (ft_print_char(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_print_unsigned_int(va_arg(vargs, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_print_int(va_arg(vargs, int)));
	else if (type == 's')
		return (ft_print_string(va_arg(vargs, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(vargs, unsigned int), type));
	else if (type == 'p')
		return (ft_print_pointer(va_arg(vargs, void *)));
	else if (type == '%')
		return (ft_print_char('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_conversion(*format, args);
		}
		else
			count += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
