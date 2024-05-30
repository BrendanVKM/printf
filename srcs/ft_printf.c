/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:28:20 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/30 09:00:13 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count = ft_cspdiuxpc(args, count, str[i]);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	ft_printf(" %p %p ", -ULONG_MAX, ULONG_MAX);
// 	printf(" %p %p ", -ULONG_MAX, ULONG_MAX);
// 	// char *str = NULL;
// 	// ft_printf("SF Hello %s\n", str);
// 	// printf("SP Hello %s\n", str);
// 	// ft_printf("CF Hello %c\n", str[0]);
// 	// printf("CP Hello %c\n", str[0]);
// 	// ft_printf("%d\n",ft_printf("test\tThe number %i is visible.\n", 0));
// 	// printf("%d\n",printf("test\tThe number %i is visible.\n", 0));
// 	// ft_printf("Hello %i\n", 0);
// 	// ft_printf("Hello %u\n", 42);
// 	// ft_printf("Hello %x\n", 42);
// 	// ft_printf("Hello %X\n", -42);
// 	// ft_printf("Hello %p\n", str);
// 	// printf("Hello %p\n", str);
// 	// ft_printf("Hello %%\n");
// 	// ft_printf("%d \n", ft_printf("Hello %p\n", str));
// 	// printf("%d \n", printf("Hello %p\n", str));
// 	return (0);
// }
