/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:50:28 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/17 20:50:29 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long	num;
	int		count;
	int		tmp;
	char		c;

	num = n;
	count = 0;
	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		num = -num;
	}
	if (num >= 10)
	{
		tmp = ft_print_int(num / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	c = (num % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (count + 1);
}
