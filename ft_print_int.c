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

	num = n;
	count = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		count++;
		num = -num;
	}
	if (num >= 10)
		count += ft_print_int(num / 10);
	ft_putchar_fd((num % 10) + '0', 1);
	count++;
	return (count);
}
