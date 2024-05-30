/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifcspc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:05:45 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/27 21:16:36 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifchar(va_list args, int count)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	count++;
	return (count);
}

int	ft_ifstring(va_list args, int count)
{
	char	*str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	count += ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count);
}

int	ft_ifpercent(int count)
{
	ft_putchar_fd('%', 1);
	count++;
	return (count);
}
