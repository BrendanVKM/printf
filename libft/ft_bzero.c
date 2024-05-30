/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvictoir <bvictoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:39:38 by bvkm              #+#    #+#             */
/*   Updated: 2024/05/22 20:26:18 by bvictoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, '\0', n);
}

// int	main(void)
// {
// 	char	str[10] = "123456789";
// 	int		i;

// 	i = 0;
// 	ft_bzero(str, 5);
// 	while (i < 10)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }