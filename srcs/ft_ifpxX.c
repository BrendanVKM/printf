/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifpxX.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:05:49 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/28 16:05:23 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifpointer(va_list args, int count)
{
	unsigned long long	pointer;
	char				*base;

	pointer = va_arg(args, unsigned long long);
	if (pointer == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (count + 5);
	}
	base = "0123456789abcdef";
	count += ft_len(pointer, ft_strlen(base)) + 2;
	ft_putstr_fd("0x", 1);
	ft_ltoa_base_fd(pointer, base, ft_strlen(base));
	return (count);
}

int	ft_ifhex(va_list args, int count, const char c)
{
	unsigned int	hex;
	char			*base;

	hex = va_arg(args, unsigned int);
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	ft_ltoa_base_fd(hex, base, ft_strlen(base));
	count += ft_len(hex, ft_strlen(base));
	return (count);
}
