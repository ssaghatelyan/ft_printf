/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:50:38 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/19 19:10:25 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int				count;
	int				hex_len;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	if (!ptr)
		return (ft_print_string("(nil)"));
	if (write(1, "0x", 2) == -1)
		return (-1);
	hex_len = ft_print_hex(address, 'x');
	if (hex_len == -1)
		return (-1);
	count = hex_len + 2;
	return (count);
}
