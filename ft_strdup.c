/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:37:10 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/08 17:37:44 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*led1;
	char	*p;
	int		i;

	led1 = (char *)s1;
	i = 0;
	if (led1[i] != '\0')
	{
		p = (char *)malloc((ft_strlen(led1) + 1) * sizeof(char));
		while (led1[i] != '\0')
		{
			p[i] = led1[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	else
	{
		p = (char *)malloc(1 * sizeof(char));
		p[0] = '\0';
		return (p);
	}
}
