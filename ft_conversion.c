/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:49:25 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/19 19:07:50 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char type, va_list *vargs)
{
	if (type == 'c')
		return (ft_print_char(va_arg(*vargs, int)));
	else if (type == 'u')
		return (ft_print_unsigned_int(va_arg(*vargs, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_print_int(va_arg(*vargs, int)));
	else if (type == 's')
		return (ft_print_string(va_arg(*vargs, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(*vargs, unsigned int), type));
	else if (type == 'p')
		return (ft_print_pointer(va_arg(*vargs, void *)));
	else if (type == '%')
		return (ft_print_char('%'));
	return (-1);
}
