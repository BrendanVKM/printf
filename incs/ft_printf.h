/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:55:30 by bvictoir          #+#    #+#             */
/*   Updated: 2024/05/28 16:10:09 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_ltoa_base_fd(unsigned long long n, char *base, int base_len);

int		ft_ifpercent(int count);
int		ft_ifu(va_list args, int count);
int		ft_printf(const char *str, ...);
int		ft_ifdi(va_list args, int count);
int		ft_ifchar(va_list args, int count);
int		ft_ifstring(va_list args, int count);
int		ft_ifpointer(va_list args, int count);
int		ft_len(unsigned long long n, int len_base);
int		ft_ifhex(va_list args, int count, const char c);
int		ft_cspdiuxpc(va_list args, int count, const char c);

#endif