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

static int handle_percent(const char *format, va_list *args)
{
	if (!*format)
		return (-1);
	return (ft_conversion(*format, args));
}

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
			tmp = handle_percent(*format, &args);
			if (tmp == -1)
				return (-1);
			count += tmp;
		}
		else if (write(1, format, 1) == -1)
		{
			va_end(args);
			return (-1);
		}
		else
			count++;
		format++;
	}
	va_end(args);
	return (count);
}
