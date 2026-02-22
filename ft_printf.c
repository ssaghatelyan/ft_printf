/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:50:02 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/20 16:05:00 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		tmp;
	va_list	args;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				retrun (va_end(args), -1);
			tmp = ft_conversion(*format, &args);
			if (tmp == -1)
				return (va_end(args), -1);
			count += tmp;
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (va_end(args), -1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
