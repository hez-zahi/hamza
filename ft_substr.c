/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:39:04 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/05 18:35:55 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_heap1(char *p, char *led, int start)
{
	int	i;

	i = 0;
	while (led[start] != '\0')
	{
		start++;
		i++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	return (p);
}

char	*ft_heap2(char *p)
{
	p = (char *)malloc(1 * sizeof(char));
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*led;
	char	*p;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	p = NULL;
	led = (char *)s;
	i = 0;
	j = (size_t)start;
	if (start >= ft_strlen(led))
		return (ft_heap2 (p));
	if (len + start >= ft_strlen(led))
		p = ft_heap1 (p, led, start);
	else
		p = (char *)malloc((len + 1) * sizeof(char));
	while (j < ((size_t)len + (size_t)start) && led[j] != '\0')
	{
		p[i] = led[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
