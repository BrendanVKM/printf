/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:59:34 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/28 16:09:42 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned long long n, int len_base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / len_base;
		len++;
	}
	return (len);
}

void	ft_ltoa_base_fd(unsigned long long n, char *base, int base_len)
{
	if (n >= (unsigned long long) base_len)
	{
		ft_ltoa_base_fd(n / base_len, base, base_len);
		ft_putchar_fd(base[n % base_len], 1);
	}
	else
		ft_putchar_fd(base[n], 1);
}

int	ft_cspdiuxpc(va_list args, int count, const char c)
{
	if (c == 'c')
		count = ft_ifchar(args, count);
	else if (c == 's')
		count = ft_ifstring(args, count);
	else if (c == 'p')
		count = ft_ifpointer(args, count);
	else if (c == 'd' || c == 'i')
		count = ft_ifdi(args, count);
	else if (c == 'u')
		count = ft_ifu(args, count);
	else if (c == 'x' || c == 'X')
		count = ft_ifhex(args, count, c);
	else if (c == '%')
		count = ft_ifpercent(count);
	return (count);
}
