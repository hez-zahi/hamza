/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:00:16 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/08 17:19:46 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*tern(unsigned char *led, int c, size_t n, size_t i)
{
	while (i < n)
	{
		if (led[i] == (unsigned char)c)
			return (led + i);
		i++;
	}
	return (NULL);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*led;

	led = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	else
		return ((void *)tern (led, c, n, i));
}
