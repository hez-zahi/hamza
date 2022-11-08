/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:27:39 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/05 18:25:15 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_call(char *led1, char *led2, char *p)
{
	int	i;
	int	j;

	i = 0;
	while (led1[i] != '\0')
	{
		p[i] = led1[i];
		i++;
	}
	j = 0;
	while (led2[j] != '\0')
	{
		p[i] = led2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*led1;
	char	*led2;
	char	*p;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	led1 = (char *)s1;
	led2 = (char *)s2;
	i = 0;
	p = malloc((ft_strlen (led1) + ft_strlen (led2) + 1) * sizeof(char));
	return (ft_call (led1, led2, p));
}
