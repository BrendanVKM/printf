/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:13:48 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/28 14:59:09 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifdi(va_list args, int count)
{
	long	d;

	d = va_arg(args, int);
	if (d < 0)
	{
		ft_putchar_fd('-', 1);
		count++;
		d = -d;
	}
	ft_ltoa_base_fd(d, "0123456789", 10);
	count += ft_len(d, 10);
	return (count);
}

int	ft_ifu(va_list args, int count)
{
	unsigned int	u;
	char			*base;

	u = va_arg(args, unsigned int);
	base = "0123456789";
	ft_ltoa_base_fd(u, base, ft_strlen(base));
	count += ft_len(u, ft_strlen(base));
	return (count);
}
