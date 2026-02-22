/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:50:54 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/17 20:50:56 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int n)
{
	int	count;
	int	tmp;

	count = 0;
	if (n >= 10)
	{
		tmp = ft_print_unsigned_int(n / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	if (write(1, (n % 10) + '0', 1) == -1)
		return (-1);
	return (count + 1);
}
