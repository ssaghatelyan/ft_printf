/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:50:19 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/19 16:14:53 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, char case_)
{
	int		count;
	char	*base;

	if (case_ == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		count += ft_print_hex(nb / 16, case_);
	}
	if (write(1, &base[nb % 16], 1) == -1)
		return (-1);
	return (count + 1);
}
