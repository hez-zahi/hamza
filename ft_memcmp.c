/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:03:57 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/08 21:44:03 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_donne(unsigned char *led1, unsigned char *led2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < n && j < n)
	{
		if (led1[i] == led2[j])
		{
			i++;
			j++;
		}
		else
		{
			if (led1[i] - led2[j] > 0)
				return (1);
			else if (led1[i] - led2[j] < 0)
				return (-1);
		}
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*led1;
	unsigned char	*led2;

	led1 = (unsigned char *)s1;
	led2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	return (ft_donne (led1, led2, n));
}
