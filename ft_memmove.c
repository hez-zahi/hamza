/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:26:00 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/08 19:36:52 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*led1;
	char	*led2;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	led1 = (char *)src;
	led2 = (char *)dst;
	if (led2 < led1)
		ft_memcpy(led2, led1, len);
	else
	{
		i = 1;
		while (i <= len)
		{
			led2[len - i] = led1[len - i];
			i++;
		}
	}
	return (led2);
}
